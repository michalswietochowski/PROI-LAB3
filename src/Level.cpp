//
// Created by Michał Świętochowski on 30.01.2014.
// Copyright (c) 2014 Michal Swietochowski. All rights reserved.
//

#include "Level.h"

string Level::toString() {
    string returnValue = getName();
    returnValue.append("\n");
    returnValue.append(map->toString());
    return returnValue;
}
