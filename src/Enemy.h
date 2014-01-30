//
// Created by Michał Świętochowski on 30.01.2014.
// Copyright (c) 2014 Michal Swietochowski. All rights reserved.
//


#ifndef __Enemy_H_
#define __Enemy_H_

#include "MapElement.h"

class Enemy : public MapElement {
    int speed;
public:
    Enemy(int x, int y): MapElement(x, y) {
        symbol = 'X';
        speed = 1;
    }

    Enemy(int speed, int x, int y): speed(speed), MapElement(x, y) {
    };
};


#endif //__Enemy_H_
