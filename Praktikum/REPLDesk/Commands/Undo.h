//
// Created by grade on 20.11.2019 г..
//

#ifndef REPLDESK_UNDO_H
#define REPLDESK_UNDO_H

#include "ICommand.h"
class Undo: public ICommand {
    Desk& desk;
public:
    Undo(std::string commandName,Desk& _desk):ICommand(commandName),desk(_desk){}
    ~Undo(){}
    void execute(){
        //TODO: Write the code for undo
    }
};


#endif //REPLDESK_UNDO_H
