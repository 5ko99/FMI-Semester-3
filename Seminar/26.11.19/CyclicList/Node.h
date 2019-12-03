//
// Created by grade on 26.11.2019 г..
//

#ifndef CYCLICLIST_NODE_H
#define CYCLICLIST_NODE_H


template <typename T>
struct Node {
    T data;
    Node<T> *next;

    Node(T const& _data, Node<T>* _next = nullptr) : data(_data), next(_next) {};
};


#endif //CYCLICLIST_NODE_H
