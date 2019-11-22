//
// Created by grade on 20.11.2019 г..
//

#ifndef REPLDESK_PRINT_H
#define REPLDESK_PRINT_H

#include "ICommand.h"
#include <iostream>
class Print: public ICommand {
    Desk& desk;
    int startX,endX,startY,endY;
public:
    Print(std::string commandName,int _startX,int _startY,int _endX,int _endY,Desk& _desk):ICommand(commandName),desk(_desk){
        startX=_startX;
        startY=_startY;
        endX=_endX;
        endY=_endY;
    }
    ~Print(){}
    void execute(){
       for(auto s: desk.desk){
            for(auto c:s){
                std::cout<<c<<'|';
            }
            std::cout<<std::endl;
            for(int i=0;desk.desk.size();i++){
                std::cout<<'-';
            }
            std::cout<<std::endl;
        }
    }
};


#endif //REPLDESK_PRINT_H
