//
// Created by Michał Świętochowski on 30.01.2014.
// Copyright (c) 2014 Michal Swietochowski. All rights reserved.
//


#ifndef __Map_H_
#define __Map_H_

#include <vector>
#include <ncurses.h>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <sstream>
#include "MapElement.h"
#include "PathElement.h"
#include "Tank.h"

using namespace std;

class Map {
    PathElement *first;
    PathElement *last;

    int width;
    int height;
    vector<MapElement> elements;
    vector<Tank> tanks;
    WINDOW *mapWindow;
public:
    Map(int width, int height): width(width), height(height) {
        mapWindow = newwin(height, width, 5, 5);
    };

    ~Map() {
        while (first) {
            PathElement *temp = first;
            first = first->next;
            delete temp;
        }
        this->first = 0;
        this->last = 0;
    }

    int getWidth() const {
        return width;
    }

    int getHeight() const {
        return height;
    }

    PathElement *getFirst() const {
        return first;
    }

    vector<Tank> const &getTanks() const {
        return tanks;
    }

    void addElement(MapElement &element);

    void addTank(Tank tank);

    void refreshTanks(int time);

    void addPathElement(int x, int y);

    void draw();
};


#endif //__Map_H_
