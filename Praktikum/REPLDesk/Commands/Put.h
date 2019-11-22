//
// Created by grade on 20.11.2019 г..
//

#ifndef REPLDESK_PUT_H
#define REPLDESK_PUT_H

#include "ICommand.h"
#include <vector>
class Put: public ICommand {
    char c;
    int x;
    int y;
    Desk& desk;
public:
    Put(std::string & commandName,char _c,int _x,int _y, Desk & _desk): ICommand(commandName), desk(_desk){
        c=_c;
        x=_x;
        y=_y;
    }
    ~Put(){}
    void execute(){
        desk.desk[x][y]=c;
    }
};


#endif //REPLDESK_PUT_H