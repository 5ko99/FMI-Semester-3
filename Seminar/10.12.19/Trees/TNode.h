//
// Created by grade on 10.12.2019 г..
//

#ifndef TREES_TNODE_H
#define TREES_TNODE_H


template <class T>
struct TNode {
    T data;
    TNode<T> *left, *right;

    TNode<T>(T _data=T(), TNode<T> *_left = nullptr, TNode<T> *_right = nullptr) : data(_data), left(_left), right(_right) {}
};


#endif //TREES_TNODE_H
