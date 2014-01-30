//
// Created by Michał Świętochowski on 30.01.2014.
// Copyright (c) 2014 Michal Swietochowski. All rights reserved.
//


#ifndef __Wall_H_
#define __Wall_H_

#include "MapElement.h"

class Wall : public MapElement {
protected:
    char symbol;
public:
    Wall(int x, int y): MapElement(x, y) {
        symbol = '|';
    };

    Wall(char symbol, int x, int y): symbol(symbol), MapElement(x, y) {
    };
};


#endif //__Wall_H_
