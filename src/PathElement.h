//
// Created by Michał Świętochowski on 01.02.2014.
// Copyright (c) 2014 Michal Swietochowski. All rights reserved.
//


#ifndef __PathElement_H_
#define __PathElement_H_

struct PathElement {
    int x;
    int y;
    PathElement *next;

    PathElement() {
        this->next = 0;
    }

    PathElement(int x, int y): x(x), y(y) {
        this->next = 0;
    }

    PathElement(const PathElement &element) {
        this->x = element.x;
        this->y = element.y;
        this->next = 0;
    }
};

#endif //__PathElement_H_
