//
// Created by grade on 26.11.2019 г..
//

#include "CyclicList.h"
#include<iostream>
template <typename T>
void CyclicList<T>::deleteList() {
    iterStart();
    Node<T> *p = iterNext();

    while (p)
    {
        delete p;
        p = iterNext();
    }
}

template <typename T>
void CyclicList<T>::copyList(CyclicList<T> const &cl) {
    end = nullptr;
    Node<T> *p = cl.end;
    if (p)
    {
        p = p->next;
        while (p != cl.end)
        {
            insertToEnd(p->data);
            p = p->next;
        }

        insertToEnd(p->data);
    }
}

template <typename T>
CyclicList<T>::CyclicList() {
    end = nullptr;
}

template <typename T>
CyclicList<T>::CyclicList(CyclicList<T> &cl) {
    copyList(cl);
}

template <typename T>
CyclicList<T>& CyclicList<T>::operator=(CyclicList<T> const &cl) {
    if (this != &cl)
    {
        deleteList();
        copyList(cl);
    }

    return &cl;
}

template <typename T>
CyclicList<T>::~CyclicList() {
    deleteList();
}

template <typename T>
void CyclicList<T>::iterStart(Node<T> *p) {
    if (p != nullptr)
        current = p;
    else if (end != nullptr)
        current = end->next;
    else
        current = nullptr;
}

template <typename T>
Node<T>* CyclicList<T>::iterNext() {
    Node<T> *p = current;
    if (current == end)
        current = nullptr;
    else if (current != nullptr)
        current = current->next;

    return p;
}

template <typename T>
Node<T>* CyclicList<T>::iterNextCyclic() {
    Node<T> *p = current;

    if (current != nullptr) {
        p = current;
        current = current->next;
    }
    else
        current = end->next;

    return p;
}

template <typename T>
void CyclicList<T>::insertToEnd(T const &x) {
    Node<T> *p = new Node<T>(x);

    if (end != nullptr)
        p->next = end->next;
    else
        end = p;

    end->next = p;
    end = end->next;
}

template <typename T>
void CyclicList<T>::deleteElem(Node<T> *p, T &x) {
    x = p->data;
    if (end != end->next)
    {
        Node<T> *q = end;
        while (q->next != p)
            q = q->next;

        q->next = p->next;
        if (p == end)
            end = q;
    }
    else
    {
        end = nullptr;
    }

    delete p;
}

template <typename T>
void CyclicList<T>::print() {
    iterStart();
    Node<T>* p = iterNext();
    while (p)
    {
        std::cout << p->data << " ";
        p = iterNext();
    }

    std::cout << std::endl;
}