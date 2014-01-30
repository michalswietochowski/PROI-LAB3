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
#include "Map.h"
#include "CLI.h"

using namespace std;

int main(int argc, char *argv[]) {
    const unsigned int MAP_WIDTH = 16;
    const unsigned int MAP_HEIGHT = 12;
    Map map(MAP_WIDTH, MAP_HEIGHT);
    CLI cli(map);
    cli.showMenu();
    return 0;
}
