//
// Created by meszi on 2017.10.22..
//

#ifndef CPP_WASTE_RECYCLING_MARTONMESZAROS_DUSBINCONTENTERROR_H
#define CPP_WASTE_RECYCLING_MARTONMESZAROS_DUSBINCONTENTERROR_H

#include <exception>

class DustbinContentError : std::exception {
public:
    virtual const char* what() const noexcept override {
        return "Dustbin Content Error!";
    }
};

#endif //CPP_WASTE_RECYCLING_MARTONMESZAROS_DUSBINCONTENTERROR_H
