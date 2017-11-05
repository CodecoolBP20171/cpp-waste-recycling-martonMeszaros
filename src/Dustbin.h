//
// Created by meszi on 2017.10.22..
//

#ifndef CPP_WASTE_RECYCLING_MARTONMESZAROS_DUSTBIN_H
#define CPP_WASTE_RECYCLING_MARTONMESZAROS_DUSTBIN_H


#include <iostream>
#include <memory>
#include "DustbinContentError.hpp"
#include "PaperGarbage.hpp"
#include "PlasticGarbage.hpp"

class Dustbin {
public:
    Dustbin(std::string color);
    ~Dustbin();

    void throwOutGarbage(Garbage& g);
    void throwOutPaperGarbage(PaperGarbage& g);
    void throwOutPlasticGarbage(PlasticGarbage& g);
    void emptyContents();
private:
    std::string color;
    Garbage* houseWasteContent;
    Garbage* hwCurrent;
    Garbage* hwcLast;
    PaperGarbage* paperGarbageContent;
    PaperGarbage* paperCurrent;
    PaperGarbage* paperLast;
    PlasticGarbage* plasticGarbageContent;
    PlasticGarbage* plasticCurrent;
    PlasticGarbage* plasticLast;
};


#endif //CPP_WASTE_RECYCLING_MARTONMESZAROS_DUSTBIN_H
