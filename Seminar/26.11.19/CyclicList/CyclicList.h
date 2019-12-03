//
// Created by grade on 26.11.2019 г..
//

#ifndef CYCLICLIST_CYCLICLIST_H
#define CYCLICLIST_CYCLICLIST_H

#include "Node.h"
template <typename T>
class CyclicList {
private:
    Node<T> *end, *current;

    void deleteList();
    void copyList(CyclicList<T> const &);

public:

    CyclicList();
    CyclicList(CyclicList<T> &cl);
    CyclicList<T>& operator=(CyclicList<T> const &);
    ~CyclicList();
    void iterStart(Node<T> *p = nullptr);
    Node<T>* iterNext();
    Node<T>* iterNextCyclic();
    void insertToEnd(T const &);
    void deleteElem(Node<T> *, T &);
    void print();
};

#endif //CYCLICLIST_CYCLICLIST_H
