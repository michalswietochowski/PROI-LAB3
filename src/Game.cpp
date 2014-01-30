//
// Created by Michał Świętochowski on 30.01.2014.
// Copyright (c) 2014 Michal Swietochowski. All rights reserved.
//

#include <iostream>
#include "Game.h"

/**
 * Runs loop showing menu and asking for choice
 * @return void
 */
void Game::start()
{
    int choice = 0;

    do {
        clearScreen();
        cout << "Tower Defense" << endl << endl;
        if (currentLevel == NULL) {
            int levelsCount = levels.size();
            for (int i = 0; i < levelsCount; i++) {
                cout << (i + 1) << ". Begin " << levels[i].getName() << endl;
            }
            cout << "0. Exit" << endl << endl;
            cout << "Choose option: ";
            cin >> choice;
            switch (choice) {
                case 0:
                    cout << "Exiting." << endl;
                    break;
                default:
                    if (choice > 0 && choice <= levelsCount) {
                        setCurrentLevel(&levels[choice - 1]);
                    }
                    break;
            }
        } else {
            cout << getCurrentLevel()->toString() << endl << endl;
            cout << "0. Back to level choice" << endl << endl;
            cout << "Choose option: ";
            cin >> choice;
            switch (choice) {
                case 0:
                    setCurrentLevel(NULL);
                    choice = -1;
                    break;
            }
        }
    } while (choice);
}

/**
 * Clears console screen
 * @return void
 */
void Game::clearScreen()
{
    for (int i = 0; i < 60; i++) {
        cout << endl;
    }
}

void Game::addLevel(Level &level) {
    levels.push_back(level);
}
