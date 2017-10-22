//
// Created by meszi on 2017.10.22..
//

#ifndef CPP_WASTE_RECYCLING_MARTONMESZAROS_GARBAGE_H
#define CPP_WASTE_RECYCLING_MARTONMESZAROS_GARBAGE_H

#include <string>

class Garbage {
public:
    Garbage(std::string& name) : name(name) {}
    virtual ~Garbage() {}

protected:
    std::string name;
};


#endif //CPP_WASTE_RECYCLING_MARTONMESZAROS_GARBAGE_H
