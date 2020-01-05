//
// Created by petko on 29.12.2019 г..
//

#ifndef POLISH_NOTATION_TNODE_H
#define POLISH_NOTATION_TNODE_H

template <typename T>
struct TNode
{
    T data;
    TNode<T> *left, *right;
    TNode<T>(T _data=T(), TNode<T> *_left = nullptr, TNode<T> *_right = nullptr) : data(_data), left(_left), right(_right) {}
};


#endif //POLISH_NOTATION_TNODE_H
