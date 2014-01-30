//
// Created by Michał Świętochowski on 30.01.2014.
// Copyright (c) 2014 Michal Swietochowski. All rights reserved.
//

#include "Level1.h"

void Level1::setupLevel() {
    const unsigned int MAP_WIDTH = 16;
    const unsigned int MAP_HEIGHT = 12;

    map = new Map(MAP_WIDTH, MAP_HEIGHT);

    Entrance entrance(2, 11);
    map->addElement(entrance);

    Exit exit(3, 0);
    map->addElement(exit);

    cout << map << endl;
}

Level1::~Level1() {
    delete map;
}
