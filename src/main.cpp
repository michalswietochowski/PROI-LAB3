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

#include <iostream>
#include "Level1.h"
#include "Game.h"

using namespace std;

int main(int argc, char *argv[]) {
    Level1 level1("Level 1");
    Game game;
    game.addLevel(level1);
    game.start();
    return 0;
}
