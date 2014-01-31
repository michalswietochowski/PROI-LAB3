//
// Created by Michał Świętochowski on 30.01.2014.
// Copyright (c) 2014 Michal Swietochowski. All rights reserved.
//

#include "Level1.h"

void Level1::setupLevel() {
    const unsigned int MAP_WIDTH = 60;
    const unsigned int MAP_HEIGHT = 20;

    map = new Map(MAP_WIDTH, MAP_HEIGHT);

    Entrance entrance(19, 2);
    map->addElement(entrance);

    Exit exit(0, 45);
    map->addElement(exit);
}

Level1::~Level1() {
    delete map;
}
