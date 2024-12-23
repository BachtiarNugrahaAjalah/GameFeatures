#include "header.h"

int main(){
    playmusic("intro.wav", SND_ASYNC);

    initscr();
    noecho();
    cbreak();

    introframe();
    
    napms(2000);
    
    stopmusic();
    
    clear();
    refresh();

    boxMenu();
    noecho();
    curs_set(0);
    cbreak();
    int ch = getch();
    mvprintw(13,57,"");
    switch (ch)
    {
    case '1':
        clearScreen();
        echo();
        curs_set(1);
        nocbreak();
        singIn();
        break;
    case '2':
        clearScreen();
        echo();
        curs_set(1);
        nocbreak();
        singUp();
        singIn();
        break;
    case '3':
        return 0;
        break;
    default:
        break;
    }

    napms(2000);
    
    playmusic("chapter.wav", SND_ASYNC);

    dialog001();
    refresh();
    
    clear();
    refresh();

    stopmusic();

    napms(2000);
    
    playmusic("peaceful.wav");

    dialog002();
    refresh();

    dialog003();
    refresh();

    dialog004();
    refresh();

    dialog005();
    refresh();

    stopmusic();
    
    napms(2000);
    
    playmusic("danger.wav");

    dialog006();
    refresh();
    
    battlemodifierA = 'A';
    battlemodifierB = 'Q';
    
    while(specialtracker2==1) {

    dialog007();
    refresh();

    stopmusic();
    
    napms(2000);
    
    playmusic("battle.wav");
    
    battlesystem();
    checkbattle();

    if (specialtracker2==1) {
    stopmusic();
    playmusic("danger.wav");
    }
    else {
        stopmusic();
    }
    };
    
    napms(2000);
    
    playmusic("great.wav");
    
    dialog008();
    refresh();

    stopmusic();
    
    dialog009();
    refresh();
    
    playmusic("unpleasant.wav");
    
    dialog010();
    refresh();

    stopmusic();
    
    clear();
    refresh();

    napms(2000);
    
    playmusic("chapter.wav", SND_ASYNC);
    
    dialog011();
    refresh();
    
    clear();
    refresh();
    
    stopmusic();

    napms(2000);
    
    playmusic("journey.wav");
    
    dialog012();
    refresh();
    
    stopmusic();
    
    napms(2000);
    
    playmusic("sorrow.wav");
    
    dialog013();
    refresh();

    endwin();

    stopmusic();

    while (true) {
        Sleep(100);
        break;
    }

    return 0;
}
