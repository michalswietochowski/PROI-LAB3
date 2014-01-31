//
// Created by Michał Świętochowski on 30.01.2014.
// Copyright (c) 2014 Michal Swietochowski. All rights reserved.
//


#ifndef __Level_H_
#define __Level_H_

#include <ncurses.h>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include "Map.h"
#include "Enemy.h"
#include "Entrance.h"
#include "Exit.h"
#include "MapElement.h"
#include "Turret.h"
#include "Wall.h"

using namespace std;

class Level {
protected:
    string name;
    int enemyCount;
    int levelTime;
    Map *map;
public:
    Level() {};
    Level(string name): name(name) { };

    string getName() { return name; };

    void setName(const string &name) {
        Level::name = name;
    }

    Map *getMap() const {
        return map;
    }

    void setMap(Map *map) {
        Level::map = map;
    }

    int getEnemyCount() const {
        return enemyCount;
    }

    void setEnemyCount(int enemyCount) {
        Level::enemyCount = enemyCount;
    }

    int getLevelTime() const {
        return levelTime;
    }

    void setLevelTime(int levelTime) {
        Level::levelTime = levelTime;
    }

    void draw();
};


#endif //__Level_H_
