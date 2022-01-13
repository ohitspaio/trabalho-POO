//
// Created by Utilizador on 10/01/2022.
//

#include "utils.h"
#include <ctime>
#include <algorithm>
#include <iostream>

void initRandom() {
    srand((unsigned int) time(nullptr));
}
int intUniformRnd(int a, int b) {
    return a + rand() % (b - a + 1);
}