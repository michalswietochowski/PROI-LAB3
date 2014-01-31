//
// Created by Michał Świętochowski on 30.01.2014.
// Copyright (c) 2014 Michal Swietochowski. All rights reserved.
//

#include "Level.h"

void Level::draw() {
    levelTime++;

    if (levelTime % 3 == 0 && rand() % 10 == 0 && enemyCount > 0) {
        Tank tank(map->getFirst());
        map->addTank(tank);
        enemyCount--;
    }

    map->refreshTanks(levelTime);

    int offsetX = 5, offsetY = 5;
    mvaddstr(offsetY - 1, offsetX, name.c_str());
    map->draw();
    move(map->getHeight() + offsetY, offsetX);
    printw("Time: %.1fs, Tanks left: %d  ", (float) levelTime / 10, enemyCount);
}

void Level::resetLevel() {
    levelTime = 0;
}

bool Level::isFinished() {
    if (enemyCount == 0 && map->getTanks().size() == 0) {
        return TRUE;
    }
    return FALSE;
}
