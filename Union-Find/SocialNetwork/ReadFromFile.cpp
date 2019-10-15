//
// Created by petko on 15/10/2019.
//

#include "ReadFromFile.h"

void ReadFromFile::read(std::ifstream& data,int& time,int& p, int& q) {
    data>>time;
    data.get();
    data>>p>>q;
}
void ReadFromFile::initialRead(std::ifstream& data,int& totalNumber, int& totalConnections) {
    data>>totalNumber>>totalConnections;
}