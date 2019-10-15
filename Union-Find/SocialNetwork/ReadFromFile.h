//
// Created by petko on 15/10/2019.
//

#ifndef SOCIALNETWORK_READFROMFILE_H
#include<fstream>
#define SOCIALNETWORK_READFROMFILE_H


class ReadFromFile {
public:
    void read(std::ifstream&,int&,int&,int&);
    void initialRead(std::ifstream&,int&,int&);
//    void read(std::ifstream& data,int& time,int& p, int& q) {
//        data>>time;
//        data.get();
//        data>>p>>q;
//    }
//    void initialRead(std::ifstream& data,int& totalNumber, int& totalConnections) {
//        data>>totalNumber>>totalConnections;
//    }
};


#endif //SOCIALNETWORK_READFROMFILE_H
