//
// Created by Michał Świętochowski on 30.01.2014.
// Copyright (c) 2014 Michal Swietochowski. All rights reserved.
//

#include "Level1.h"

void Level1::setupLevel() {
    enemyCount = 20;

    const unsigned int MAP_WIDTH = 64;
    const unsigned int MAP_HEIGHT = 24;

    map = new Map(MAP_WIDTH, MAP_HEIGHT);

    int xs = 2, ys = MAP_HEIGHT - 1;
    int xe = MAP_WIDTH - 6, ye = 0;

    Entrance entrance(xs, ys);
    map->addElement(entrance);

    Exit exit(xe, ye);
    map->addElement(exit);

    int x = xs + 1, y = ys - 1;
    ye++;

    //fill random path between start and end
    do {
        map->addPathElement(x, y);

        if (x == xe) {
            y--;
        } else if (y == ye) {
            x++;
        } else if (rand() % 3 == 0) {
            y--;
        } else {
            x++;
        }
    } while (x <= xe && y >= ye);
}

Level1::~Level1() {
    delete map;
}

void Level1::resetLevel() {
    Level::resetLevel();
    enemyCount = 20;
    delete map;
    setupLevel();
}
