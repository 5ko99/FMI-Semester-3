//
// Created by grade on 26.11.2019 г..
//

#ifndef BINTREE_TNODE_H
#define BINTREE_TNODE_H


template <class T>
struct TNode{
    T data;
    TNode<T> *left, *right;

    explicit TNode<T>(T _data=T(), TNode<T> *_left = nullptr, TNode<T> *_right = nullptr) : data(_data), left(_left), right(_right) {}
};

#endif //BINTREE_TNODE_H
