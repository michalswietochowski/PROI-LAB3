//
// Created by Michał Świętochowski on 30.01.2014.
// Copyright (c) 2014 Michal Swietochowski. All rights reserved.
//


#ifndef __Tank_H_
#define __Tank_H_

#include "MapElement.h"
#include "PathElement.h"

class Tank : public MapElement {
    int speed;
    PathElement *pathNode;
public:
    Tank(PathElement *pathElement): MapElement(pathElement->x, pathElement->y) {
        symbol = "X";
        speed = 2;
        pathNode = pathElement;
    }

    int getSpeed() const {
        return speed;
    }

    PathElement *getPathNode() const {
        return pathNode;
    }

    void setPathNode(PathElement *pathNode) {
        this->x = pathNode->x;
        this->y = pathNode->y;
        Tank::pathNode = pathNode;
    }
};


#endif //__Tank_H_
