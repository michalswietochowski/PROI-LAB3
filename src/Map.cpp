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
    int tanksCount = tanks.size();
    int offsetX = 5, offsetY = 5;

    for (int i = 0; i < elementsCount; i++) {
        mvaddstr(elements[i].getY() + offsetY, elements[i].getX() + offsetX, elements[i].getSymbol().c_str());
    }

    PathElement *element = first;
    while (element != NULL) {
        mvaddstr(element->y + offsetY, element->x + offsetX, ".");
        element = element->next;
    }

    for (int i = 0; i < tanksCount; i++) {
        mvaddstr(tanks[i].getY() + offsetY, tanks[i].getX() + offsetX, tanks[i].getSymbol().c_str());
    }

    box(mapWindow, 0, 0);
    wrefresh(mapWindow);
}

void Map::addPathElement(int x, int y) {
    PathElement *newElement = new PathElement(x, y);

    if (!first) {
        first = newElement;
        last = newElement;
    } else {
        PathElement *oldLast = last;
        last->next = newElement;
        last = newElement;
    }
}

void Map::addTank(Tank tank) {
    tanks.push_back(tank);
}

void Map::refreshTanks(int time) {
    int tanksCount = tanks.size();
    for (int i = 0; i < tanksCount; i++) {
        if (time % tanks[i].getSpeed() == 0) {
            if (tanks[i].getPathNode()->next) {
                tanks[i].setPathNode(tanks[i].getPathNode()->next);
            } else {
                tanks.erase(tanks.begin() + i);
            }
        }
    }
}
