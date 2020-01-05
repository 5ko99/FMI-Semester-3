//
// Created by petko on 05/01/2020.
//

#ifndef BINTREE1_TNODE_H
#define BINTREE1_TNODE_H

template <class T>
struct TNode {
    T data;
    TNode *left,*right;
    TNode(T _data=T(),TNode* _left= nullptr, TNode* _right= nullptr):data(_data),left(_left),right(_right){}
};


#endif //BINTREE1_TNODE_H
