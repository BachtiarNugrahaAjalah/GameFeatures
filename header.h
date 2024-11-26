#include "animation.h"
#include "stat.h"
#include "dialog.h"
#include <windows.h>
#include <unistd.h>
#include <iostream>
#include <random>
#include <fstream>

using namespace std;

void resethealth() {
  playerhp = 100;
  enemyhp = 100;
}

void playmusic(const char * musicFile, DWORD flags = SND_ASYNC | SND_LOOP) {
  PlaySound(TEXT(musicFile), NULL, flags);
}

void stopmusic() {
  PlaySound(NULL, 0, SND_PURGE);
}

void choicesinfo() {
  clear();
  refresh();
  if (specialtracker == 1) {
    slashesframe();
    enemyhp -= (playerattack - enemydefense);
    switch (battlemodifierA) {
    case 'A':
      chat(20, 20, "Kau menyerang musuhmu dengan sabit dan kapak besi!", 10);
      break;
    }
  } else if (specialtracker == 2) {
    magicsframe();
    enemyhp -= (3 * playerattack - enemydefense);
    switch (battlemodifierA) {
    case 'A':
      chat(20, 20, "Kau menyerang musuhmu dengan sihir!", 10);
      break;
    }
  }
  mvprintw(22, 20, "Enemy HP %d", enemyhp);
  mvprintw(24, 20, "[PRESS ANY BUTTON]");
  refresh();
  getch();
  clear();
  refresh();
}

void print_menu(WINDOW * menu_win, int pilihanTerpilih, const char * opsi[], int jumlahopsi) {
  for (int i = 0; i < jumlahopsi; ++i) {
    if (i == pilihanTerpilih) {
      wattron(menu_win, A_REVERSE);
    }

    mvwprintw(menu_win, i + 1, 1, opsi[i]);

    if (i == pilihanTerpilih) {
      wattroff(menu_win, A_REVERSE);
    }
  }

  wrefresh(menu_win);
}

// function untuk battle

void playerturn() {
  initscr();
  clear();
  noecho();
  cbreak();

  int awalx = 20, awaly = 30;
  int lebar = 30, tinggi = 20;

  WINDOW * menu_win = newwin(tinggi, lebar, awaly, awalx);

  keypad(menu_win, TRUE);

  const char * opsi[] = {
    "Pilih Strategimu!",
    "Attack",
    "Magic",
    "Defense"
  };

  int jumlahopsi = sizeof(opsi) / sizeof(char * );
  int pilihanTerpilih = 0;
  int pilihan = -1;

  while (1) {
    print_menu(menu_win, pilihanTerpilih, opsi, jumlahopsi);

    int tombol = wgetch(menu_win);

    switch (tombol) {
    case KEY_UP:
      if (pilihanTerpilih == 0) {
        pilihanTerpilih = jumlahopsi - 1;
      } else {
        --pilihanTerpilih;
      }
      break;

    case KEY_DOWN:
      if (pilihanTerpilih == jumlahopsi - 1) {
        pilihanTerpilih = 0;
      } else {
        ++pilihanTerpilih;
      }
      break;

    case 10:
      pilihan = pilihanTerpilih;
      break;
    }

    clrtoeol();
    refresh();

    if (pilihan == 1) {
      specialtracker = 1;
      choicesinfo();
      break;
    } else if (pilihan == 2) {
      specialtracker = 2;
      choicesinfo();
      break;
    } else if (pilihan == 3) {
      specialtracker = 3;
      break;
    }
  }

  endwin();
}

void enemyattacks() {
  playerhp -= (enemyattack - playerdefense);
  switch (battlemodifierB) {
  case 'Q':
    chat(20, 20, "Musuh menyerangmu dengan tangan jeraminya!", 10);
    break;
  }
  mvprintw(22, 20, "Player HP %d", playerhp);
  mvprintw(24, 20, "[PRESS ANY BUTTON]");
  refresh();
  getch();
  clear();
  refresh();
}

void enemymagics() {
  playerhp -= (enemyattack - playerdefense);
  switch (battlemodifierB) {
  case 'Q':
    chat(20, 20, "Musuh menyerangmu dengan sihir angin!", 10);
    break;
  }
  mvprintw(22, 20, "Player HP %d", playerhp);
  mvprintw(24, 20, "[PRESS ANY BUTTON]");
  refresh();
  getch();
  clear();
  refresh();
}

void enemydefenses() {
  playerhp -= (enemyattack);
  switch (battlemodifierB) {
  case 'Q':
    chat(20, 20, "Musuh bertahan!", 10);
    break;
  }
  mvprintw(22, 20, "Player HP %d", playerhp);
  mvprintw(24, 20, "[PRESS ANY BUTTON]");
  refresh();
  getch();
  clear();
  refresh();
}

void enemyultimate() {
  playerhp -= (2 * enemyattack - playerdefense);
  switch (battlemodifierB) {
  case 'Q':
    chat(20, 20, "Musuh menyerangmu dengan kekuatan maksimal!", 10);
    break;
  }
  mvprintw(22, 20, "Player HP %d", playerhp);
  mvprintw(24, 20, "[PRESS ANY BUTTON]");
  refresh();
  getch();
  clear();
  refresh();
}

void randomattack() {
  int randomize = rand() % 100;

  if (randomize < 30) {
    enemyattacks();
  } else if (randomize < 60) {
    enemymagics();
  } else if (randomize < 80) {
    enemydefenses();
  } else {
    enemyultimate();
  }
}

void checkbattle() {
  if (playerhp < enemyhp) {
    chat(20, 20, "You Lose", 95);
    chat(22, 20, "[PRESS ENTER]", 95);
    refresh();
    getch();
    refresh();
    clear();
    specialtracker2 = 1;
  } else if (playerhp > enemyhp) {
    specialtracker2 = 0;
    chat(20, 20, "You Won!", 95);
    chat(22, 20, "[PRESS ENTER]", 95);
    refresh();
    getch();
    refresh();
    clear();
  }
}

void battlesystem() {
  while (playerhp > 0 && enemyhp > 0) {
    playerturn();
    randomattack();
  }
}
