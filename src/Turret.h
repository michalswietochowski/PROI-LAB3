//
// Created by Michał Świętochowski on 30.01.2014.
// Copyright (c) 2014 Michal Swietochowski. All rights reserved.
//


#ifndef __Turret_H_
#define __Turret_H_

#include "MapElement.h"

class Turret : public MapElement {
public:
    Turret(int x, int y): MapElement(x, y) {
        symbol = "T";
    };
};


#endif //__Turret_H_
