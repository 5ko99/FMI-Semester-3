//
// Created by petko on 13/11/2019.
//

#ifndef EXPRESSIONS_F_H
#define EXPRESSIONS_F_H

#include "IFunction.h"

class f: public IFunction {
public:
 int Execute(int p) override{
     return (p*p)%100;
 }
 int Execute(int p,int q) override{
     return 0;
 }
};


#endif //EXPRESSIONS_F_H
