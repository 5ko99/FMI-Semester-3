//
// Created by petko on 13/11/2019.
//

#ifndef EXPRESSIONS_M_H
#define EXPRESSIONS_M_H
#include "IFunction.h"
class m: public IFunction {
public:
    int Execute(int p, int q) override{
        return (p<q)? p:q;
    }
    int Execute(int p){
        return 0;
    }
};


#endif //EXPRESSIONS_M_H
