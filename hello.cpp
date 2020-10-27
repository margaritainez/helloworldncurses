// SOURCE CODE FOR HELLO PROGRAM
// MARGARITA MALIGAYA

#include <ncurses.h>
#include <iostream>
using namespace std;

int main(int argc, char ** argv)
{
	int height, width, start_y, start_x;

	initscr(); // begin curses mode

	height = 12; // height of window
	width = 41; // width of window
	start_y = (LINES - height) / 2; // LINES and COLS  provided by ncurses lib
	start_x = (COLS - width) / 2;

	WINDOW * win = newwin(height, width, start_y, start_x); // creates window
	refresh();

	wborder(win, '#', '#', '#', '#', '#', '#', '#', '#'); // wborder takes eight arguments
	mvwprintw(win, 6, 14, "HELLO WORLD!");
	wrefresh(win); // window refresh
	refresh();
	move(LINES-1, COLS-1); // move cursor to bottom right of the terminal

	getch(); // gets user input
	endwin(); // deallocates window and ends curses mode

	return 0;
}

