//
// Created by meszi on 2017.10.22..
//

#include "Dustbin.h"

Dustbin::Dustbin(std::string color) : color(color) {
    houseWasteContent = new Garbage[10];
    hwCurrent = houseWasteContent;
    hwcLast = houseWasteContent + 9;
    paperGarbageContent = new PaperGarbage[10];
    paperCurrent = paperGarbageContent;
    paperLast = paperGarbageContent + 9;
    plasticGarbageContent = new PlasticGarbage[10];
    plasticCurrent = plasticGarbageContent;
    plasticLast = plasticGarbageContent + 9;
}

Dustbin::~Dustbin() {
    delete[] houseWasteContent;
    delete[] paperGarbageContent;
    delete[] plasticGarbageContent;
}

void Dustbin::throwOutGarbage(Garbage &g) {
    if (hwCurrent == hwcLast) {
        Garbage *tmp = houseWasteContent;
        size_t tmpSize = hwcLast - houseWasteContent + 1;
        houseWasteContent = new Garbage[tmpSize + 10];
        hwCurrent = houseWasteContent + tmpSize;
        hwcLast = houseWasteContent + tmpSize + 8;
        for (size_t i = 0; i < tmpSize; ++i) {
            houseWasteContent[i] = tmp[i];
        }
    }
    hwCurrent = &g;
    ++hwCurrent;
}

void Dustbin::throwOutPaperGarbage(PaperGarbage &g) {
    if (!g.getSqueezed()) throw DustbinContentError();
    if (paperCurrent == paperLast) {
        PaperGarbage *tmp = paperGarbageContent;
        size_t tmpSize = paperLast - paperGarbageContent + 1;
        paperGarbageContent = new PaperGarbage[tmpSize + 10];
        paperCurrent = paperGarbageContent + tmpSize;
        paperLast = paperGarbageContent + tmpSize + 8;
        for (size_t i = 0; i < tmpSize; ++i) {
            paperGarbageContent[i] = tmp[i];
        }
    }
    paperCurrent = &g;
    ++paperCurrent;
}

void Dustbin::throwOutPlasticGarbage(PlasticGarbage &g) {
    if (!g.getClean()) throw DustbinContentError();
    if (plasticCurrent == plasticLast) {
        PlasticGarbage *tmp = plasticGarbageContent;
        size_t tmpSize = plasticLast - plasticGarbageContent + 1;
        plasticGarbageContent = new PlasticGarbage[tmpSize + 10];
        plasticCurrent = plasticGarbageContent + tmpSize;
        plasticLast = plasticGarbageContent + tmpSize + 8;
        for (size_t i = 0; i < tmpSize; ++i) {
            plasticGarbageContent[i] = tmp[i];
        }
    }
    plasticCurrent = &g;
    ++plasticCurrent;
}

void Dustbin::emptyContents() {
    hwCurrent = houseWasteContent;
    paperCurrent = paperGarbageContent;
    plasticCurrent = plasticGarbageContent;
}
