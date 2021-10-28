#include <ncurses.h>
int main()
{
    initscr();
    printw("Hola linux!");
    refresh();
    getch();
    endwin();
    return 0;
}