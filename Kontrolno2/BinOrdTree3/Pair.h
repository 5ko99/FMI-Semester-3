//
// Created by petko on 05/01/2020.
//

#ifndef BINORDTREE3_PAIR_H
#define BINORDTREE3_PAIR_H

#include <iostream>
using namespace std;
class Pair {
private:
    int len;
    int calcLen(){
        if(a>b) return a-b;
        else return b-a;
    }
public:
    int a,b;
    Pair(int _a=0,int _b=0):a(_a),b(_b) {
        len = calcLen();
    }
    int getLen() const{
        return this->len;
    }
    bool operator<(const Pair& p)const{
        return len<p.len;
    }
    friend istream& operator>>(istream& is, Pair& p){
        is>>p.a>>p.b;
        if(p.a>p.b) p.len=p.a-p.b;
        else p.len=p.b-p.a;
        return is;
    }
    friend ostream& operator<<(ostream& os, Pair& p){
        os<<p.a<<' '<<p.b;
        return os;
    }
};


#endif //BINORDTREE3_PAIR_H
