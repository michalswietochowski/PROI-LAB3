//
// Created by Michał Świętochowski on 30.01.2014.
// Copyright (c) 2014 Michal Swietochowski. All rights reserved.
//


#ifndef __Level1_H_
#define __Level1_H_

#include "Level.h"

class Level1 : public Level {
public:
    Level1(string name): Level(name) {
        setupLevel();
    }
    ~Level1();
    void setupLevel();
};


#endif //__Level1_H_
