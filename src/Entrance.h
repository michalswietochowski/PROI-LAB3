//
// Created by Michał Świętochowski on 30.01.2014.
// Copyright (c) 2014 Michal Swietochowski. All rights reserved.
//


#ifndef __Entrance_H_
#define __Entrance_H_

#include "MapElement.h"

class Entrance: public MapElement {
public:
    Entrance(int x, int y): MapElement(x, y) {
        symbol = 'S';
    };
};


#endif //__Entrance_H_
