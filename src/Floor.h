//
// Created by Michał Świętochowski on 30.01.2014.
// Copyright (c) 2014 Michal Swietochowski. All rights reserved.
//


#ifndef __Floor_H_
#define __Floor_H_

#include "MapElement.h"

class Floor : public MapElement {
public:
    Floor(int x, int y): MapElement(x, y) {
        symbol = ' ';
    };
};


#endif //__Floor_H_
