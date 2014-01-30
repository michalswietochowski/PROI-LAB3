//
// Created by Michał Świętochowski on 30.01.2014.
// Copyright (c) 2014 Michal Swietochowski. All rights reserved.
//


#ifndef __Map_H_
#define __Map_H_

#include <map>
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
    map<int, map<int, MapElement> > elements;
public:
    Map(int width, int height): width(width), height(height) {
        for (int i = 0; i < width; i++) {
            for (int j = 0; j < height; j++) {
                Floor floor(i, j);
                addElement(floor);
            }
        }
    };

    void addElement(MapElement &element);

    string toString();

    /**
     * Shorthand for toString() method
     * @param ostream output
     * @param Map& map
     * @return ostream&
     */
    friend ostream &operator <<(ostream &output, Map &map) {
        return output << map.toString();
    }
};


#endif //__Map_H_
