#include <iostream>
#include "CyclicList.h"
using namespace std;
bool canReadNumber(CyclicList<int> &cl,int n){
    cl.iterStart();
    Node<int> *p=cl.iterNextCyclic();
    int result=0;
    while(result<n){
        result=result*10+p->data;
        p=cl.iterNextCyclic();
    }
    return n==result;
}
int main() {
    CyclicList<int> cl;
    for(int i=0;i<11;i++)
        cl.insertToEnd(i);
    //cout<<canReadNumber(cl,123)<<endl;
    return 0;
}