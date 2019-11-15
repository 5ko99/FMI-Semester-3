//
// Created by petko on 13/11/2019.
//

#ifndef EXPRESSIONS_G_H
#define EXPRESSIONS_G_H


#include "IFunction.h"

class g: public IFunction {
public:
    int Execute(int p) override{
        return  factorial(p%5);
    }

    int Execute(int p,int q) override{
        return 0;
    }
private:
    int factorial(int n)
    {
        return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
    }
};



#endif //EXPRESSIONS_G_H
