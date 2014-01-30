//
// Created by Michał Świętochowski on 30.01.2014.
// Copyright (c) 2014 Michal Swietochowski. All rights reserved.
//


#ifndef __CLI_H_
#define __CLI_H_

#include "Map.h"

using namespace std;

class CLI {
    Map map;
public:
    /**
     * Constructor
     * @param Map& map map object
     */
    CLI(Map &map) : map(map) { };

    /**
     * Clears console screen
     * @return void
     */
    void clearScreen();
    /**
     * Runs loop showing menu and asking for choice
     * @return void
     */
    void showMenu();
    /**
     * Prints prompt to press ENTER key and waits
     * @return void
     */
    void wait();
};


#endif //__CLI_H_
