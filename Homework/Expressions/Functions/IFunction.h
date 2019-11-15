//
// Created by petko on 13/11/2019.
//

#ifndef EXPRESSIONS_IFUNCTION_H
#define EXPRESSIONS_IFUNCTION_H

#include <iostream>
#include <utility>
class IFunction {
public:
    virtual int Execute(int)=0;
    virtual int Execute(int,int)=0;
};


#endif //EXPRESSIONS_IFUNCTION_H
