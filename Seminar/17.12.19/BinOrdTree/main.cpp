#include <iostream>
#include "BinOrdTree.h"
template <class T>
bool search(TNode<T> const * root, T const & x){
    TNode<T> *p=root;
    while(p!= nullptr){
        if(p->data<x){
            p=p->right;
        }else if(p->data>x){
            p=p->right;
        }else{
            return true;
        }
    }
}

void getNLargest(TNode<int> *r,int n,int & counter, int & result){
    if(r== nullptr)
        return;
    //Right
    getNLargest(r->right,n,counter,result);
    //Left
    counter++;
    if(counter==n){
        result=r->data;
        return;
    }
    getNLargest(r->left,n,counter,result);
}

void printInInterval(BinOrdTree<int> const & t,int a,int b){
    if(t.isEmpty())
        return;
    int rd=t.getRootData();
    if(rd>=a&&rd<=b)
        std::cout<<rd<<' ';
    if(rd>=a)
        printInInterval(t.getLeftTree(),a,b);
    if(rd<=b)
        printInInterval(t.getRightTree(),a,b);
}

int main() {

    return 0;
}
