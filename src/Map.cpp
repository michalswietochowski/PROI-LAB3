//
// Created by Michał Świętochowski on 30.01.2014.
// Copyright (c) 2014 Michal Swietochowski. All rights reserved.
//

#include "Map.h"

void Map::addElement(MapElement &element) {
    elements.push_back(element);
}

void Map::draw() {
    int elementsCount = elements.size();
    int offsetX = 5, offsetY = 5;

    for (int i = 0; i < elementsCount; i++) {
        mvaddch(elements[i].getX() + offsetX, elements[i].getY() + offsetY, elements[i].getSymbol());
    }

    box(mapWindow, 0, 0);
    wrefresh(mapWindow);
}
