//
// Created by grade on 20.11.2019 г..
//

#ifndef REPLDESK_DELETE_H
#define REPLDESK_DELETE_H


#include "ICommand.h"
class Delete: public ICommand {
    int x;
    int y;
    Desk& desk;
public:
    Delete(std::string commandName,int _x,int _y, Desk& _desk):ICommand(commandName),desk(_desk){
        x=_x;
        y=_y;
    }
    ~Delete(){}
    void execute(){
        desk.desk[x][y]=' ';
    }
};


#endif //REPLDESK_DELETE_H
