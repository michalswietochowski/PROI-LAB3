//
// Created by Michał Świętochowski on 30.01.2014.
// Copyright (c) 2014 Michal Swietochowski. All rights reserved.
//


#ifndef __CLI_H_
#define __CLI_H_

#include "ncurses.h"
#include <vector>
#include "Level.h"

using namespace std;

class Game {
    vector<Level> levels;
    Level *currentLevel;
public:
    /**
     * Constructor
     */
    Game() {
        setCurrentLevel(NULL);
    };

    void addLevel(Level &level);


    Level *getCurrentLevel() const {
        return currentLevel;
    }

    void setCurrentLevel(Level *currentLevel) {
        Game::currentLevel = currentLevel;
    }

    /**
     * Runs loop showing menu and asking for choice
     * @return void
     */
    void start();
};


#endif //__CLI_H_
