//
// Created by grade on 20.11.2019 г..
//

#ifndef REPLDESK_ICOMMAND_H
#define REPLDESK_ICOMMAND_H

#include <string>
#include <vector>
#include "../Desk.h"
class ICommand {
public:
    ICommand(std::string _commandName):commandName(_commandName){}
    virtual ~ICommand()=0;
    virtual void execute()=0;
protected:
    std::string commandName;
};


#endif //REPLDESK_ICOMMAND_H
