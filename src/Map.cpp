//
// Created by Michał Świętochowski on 30.01.2014.
// Copyright (c) 2014 Michal Swietochowski. All rights reserved.
//

#include "Map.h"

void Map::addElement(MapElement &element) {
    elements[element.getX()][element.getY()] = element;
}

string Map::toString() {
    string mapString = "";
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            stringstream ss;
            string s;
            ss << elements[i][j].getSymbol();
            ss >> s;
            mapString.append(s);
        }
    }
    return mapString;
}
