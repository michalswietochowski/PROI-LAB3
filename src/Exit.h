//
// Created by Michał Świętochowski on 30.01.2014.
// Copyright (c) 2014 Michal Swietochowski. All rights reserved.
//


#ifndef __Exit_H_
#define __Exit_H_

#include "MapElement.h"

class Exit: public MapElement {
public:
    Exit(int x, int y): MapElement(x, y) {
        symbol = "|E|";
    };
};


#endif //__Exit_H_
