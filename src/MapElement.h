//
// Created by Michał Świętochowski on 30.01.2014.
// Copyright (c) 2014 Michal Swietochowski. All rights reserved.
//


#ifndef __MapElement_H_
#define __MapElement_H_

#include <string>

using namespace std;

class MapElement {
protected:
    string symbol;
    int x;
    int y;
public:
    MapElement() {};
    MapElement(int x, int y): x(x), y(y) {
    };

    string getSymbol() const {
        return symbol;
    }

    void setSymbol(char symbol) {
        MapElement::symbol = symbol;
    }

    int getX() const {
        return x;
    }

    void setX(int x) {
        MapElement::x = x;
    }

    int getY() const {
        return y;
    }

    void setY(int y) {
        MapElement::y = y;
    }
};


#endif //__MapElement_H_
