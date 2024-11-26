#include <ncurses/curses.h>
#include <unistd.h>
#include <fstream>
#include <string>


void drawGame();      
void pauseMenu(bool& running, bool& restart); 
void saveGameStatus();  
void loadGameStatus(); 

int main() {
    bool running = true; 
    bool restart = false;

    
    initscr();
    noecho();
    cbreak();
    keypad(stdscr, TRUE);
    curs_set(0);

    
    while (running) {
        clear();
        drawGame();
        refresh();

        
        int ch = getch();
        if (ch == 'p' || ch == 'P') { 
            pauseMenu(running, restart);
            if (restart) {
                
                restart = false;
            }
        } else if (ch == 'q' || ch == 'Q') {
            running = false;
        }
        usleep(50000); 
    }

    
    endwin();
    return 0;
}

using namespace std;

void drawGame() {
    mvprintw(5, 10, "Game sedang berlangsung... ketik 'P' untuk berhenti.");
    mvprintw(6, 10, "Ketik'Q' untuk keluar dari game.");
}

void pauseMenu(bool& running, bool& restart) {
    int choice = 0;
  string options[] = {"Lanjutkan Game", "Mulai ulang Game", "Keluar dari Game"};
    int numOptions = 3;

    while (true) {
        clear();
        mvprintw(5, 10, "Game Paused");
        for (int i = 0; i < numOptions; i++) {
            if (i == choice)
                attron(A_REVERSE);
            mvprintw(7 + i, 12, options[i].c_str());
            if (i == choice)
                attroff(A_REVERSE);
        }
        refresh();

        int ch = getch();
        if (ch == KEY_UP) {
            choice = (choice - 1 + numOptions) % numOptions;
        } else if (ch == KEY_DOWN) {
            choice = (choice + 1) % numOptions;
        } else if (ch == '\n') { 
            if (choice == 0) {
                break;
            } else if (choice == 1) { 
                restart = true;
                break;
            } else if (choice == 2) { 
                running = false;
                break;
            }
        }
    }
}

void saveGameStatus() {
    ofstream saveFile("game_state.txt");
    if (saveFile.is_open()) {
        saveFile << "Dummy game status data\n"; 
        saveFile.close();
    }
}

void loadGameStatus() {
    ifstream saveFile("game_status.txt");
    if (saveFile.is_open()) {
        string line;
        while (getline(saveFile, line)) {
           
        }
        saveFile.close();
    }
}

