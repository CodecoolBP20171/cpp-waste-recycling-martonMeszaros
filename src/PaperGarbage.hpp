//
// Created by meszi on 2017.10.22..
//

#ifndef CPP_WASTE_RECYCLING_MARTONMESZAROS_PAPERGARBAGE_H
#define CPP_WASTE_RECYCLING_MARTONMESZAROS_PAPERGARBAGE_H

#include "Garbage.hpp"

class PaperGarbage : public Garbage {
public:
    PaperGarbage(std::string& name, bool& isSqueezed) :
            Garbage(name), isSqueezed(isSqueezed) {}
    ~PaperGarbage() {}

    void squeeze() { isSqueezed = true; }

private:
    bool isSqueezed;
};

#endif //CPP_WASTE_RECYCLING_MARTONMESZAROS_PAPERGARBAGE_H
