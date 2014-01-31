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
        attron(A_BOLD);
        move(0, 0);
        printw("Tower Defense\n\n");
        attroff(A_BOLD);
        if (currentLevel == NULL) {
            int levelsCount = levels.size();
            printw("Choose option:\n");
            for (int i = 0; i < levelsCount; i++) {
                printw("%3d - Begin %s\n", i + 1, levels[i].getName().c_str());
            }
            printw("Esc - Exit\n");
            choice = getch();
            switch (choice) {
                case 27:
                    choice = 0;
                    break;
                default:
                    choice = choice - 48;
                    if (choice > 0 && choice <= levelsCount) {
                        setCurrentLevel(&levels[choice - 1]);
                        halfdelay(5);
                        clear();
                    }
                    break;
            }
        } else {
            printw("Esc - Return to menu\n\n");
            currentLevel->draw();
            choice = getch();
            switch (choice) {
                case 27:
                    setCurrentLevel(NULL);
                    halfdelay(255);
                    choice = -1;
                    clear();
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
