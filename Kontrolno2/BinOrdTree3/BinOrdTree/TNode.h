//
// Created by petko on 05/01/2020.
//

#ifndef BINORDTREE3_TNODE_H
#define BINORDTREE3_TNODE_H


template <typename T>
struct TNode
{
    T data;
    TNode<T> *left, *right;

    TNode<T>(T _data, TNode<T> *_left = nullptr, TNode<T> *_right = nullptr) : data(_data), left(_left), right(_right) {}
};


#endif //BINORDTREE3_TNODE_H
