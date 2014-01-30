//
// Created by Michał Świętochowski on 30.01.2014.
// Copyright (c) 2014 Michal Swietochowski. All rights reserved.
//

#include <iostream>
#include "CLI.h"

/**
 * Runs loop showing menu and asking for choice
 * @return void
 */
void CLI::showMenu()
{
    int choice;

    do {
        clearScreen();
        cout << "Tower Defense" << endl << endl;
//        cout << buffer << endl << endl;
        cout << "1. Add turret" << endl;
        cout << "0. Exit" << endl << endl;
        cout << "Choose option: ";
        cin >> choice;
        switch (choice) {
            case 0:
                cout << "Exiting." << endl;
                break;
            case 1:
//                addElement();
                break;
        }
    } while (choice);
}

/**
 * Clears console screen
 * @return void
 */
void CLI::clearScreen()
{
    for (int i = 0; i < 60; i++) {
        cout << endl;
    }
}