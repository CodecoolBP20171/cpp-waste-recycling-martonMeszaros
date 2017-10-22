//
// Created by meszi on 2017.10.22..
//

#ifndef CPP_WASTE_RECYCLING_MARTONMESZAROS_PLASTICGARBAGE_H
#define CPP_WASTE_RECYCLING_MARTONMESZAROS_PLASTICGARBAGE_H

#include "Garbage.hpp"

class PlasticGarbage : public Garbage {
public:
    PlasticGarbage(std::string& name, bool& isClean) :
            Garbage(name), isClean(isClean) {}
    ~PlasticGarbage() {}

    void clean() { isClean = true; }
private:
    bool isClean;
};

#endif //CPP_WASTE_RECYCLING_MARTONMESZAROS_PLASTICGARBAGE_H
