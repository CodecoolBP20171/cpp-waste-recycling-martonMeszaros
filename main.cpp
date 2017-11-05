#include <iostream>

#include "src/Dustbin.h"

int main() {
    Dustbin dustbin("yellow");
    Garbage garbage;
    dustbin.throwOutGarbage(garbage);
    return 0;
}