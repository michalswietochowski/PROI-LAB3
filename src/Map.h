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
#include "Floor.h"

using namespace std;

class Map {
    int width;
    int height;
    vector<MapElement> elements;
    WINDOW *mapWindow;
public:
    Map(int width, int height): width(width), height(height) {
        mapWindow = newwin(height, width, 5, 5);
    };
    ~Map() {
        wborder(mapWindow, ' ', ' ', ' ',' ',' ',' ',' ',' ');
        wrefresh(mapWindow);
        delwin(mapWindow);
    }

    void addElement(MapElement &element);

    void draw();
};


#endif //__Map_H_
