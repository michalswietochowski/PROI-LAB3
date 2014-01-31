/**
 * Warsaw University of Technology
 * The Faculty of Electronics and Information Technology
 *
 * Object-Oriented Programming Lab 3 - Tower Defense
 *
 * Main file
 *
 * @author Michal Swietochowski 
 */

#include <ncurses.h>
#include <iostream>
#include <cstdlib>
#include "Level1.h"
#include "Game.h"

using namespace std;

int main(int argc, char *argv[]) {
    initscr();
    //disable input printing
    noecho();
    //disable cursor
    curs_set(0);
    //enable arrows and special keys
    keypad(stdscr, TRUE);
    //init randomizer
    srand(time(NULL));
    //init level1
    Level1 level1("Level 1");
    Game game;
    game.addLevel(level1);
    //start the game
    game.start();
    endwin();
    return 0;
}
