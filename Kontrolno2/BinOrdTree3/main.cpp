#include <iostream>
#include "BinOrdTree/BinOrdTree.h"
#include "Pair.h"
using namespace std;
int getSmallest(int a,int b){
    if(a<b) return a;
    else return b;
}
int getBiggest(int a,int b){
    if(a>b) return a;
    else return b;
}
bool getIntersection(Pair p1, Pair p2){
   int n=getBiggest(p1.a,p2.a);
   int m=getSmallest(p1.b,p2.b);
   return n <= m;
}
Pair calc(BinOrdTree<Pair>& tree){
    if(getIntersection(tree.getRootData(),tree.getRightTree().getRootData())){

    }
}

int main() {
    BinOrdTree<Pair> t;
    t.create();
    return 0;
}
