//
// Created by petko on 21/11/2019.
//

#ifndef CYCLEDLINKEDLIST_LINKEDLISTITERATOR_H
#define CYCLEDLINKEDLIST_LINKEDLISTITERATOR_H

#include "library.h"

template<class T>
class LinkedListIterator {
    using N = Node<T>;
    using I = LinkedListIterator<T>;
    friend class CycledLinkedList<T>;
    N* ptr;
public:
    LinkedListIterator(Node* _ptr= nullptr):ptr(_ptr){}
    I next() const;
    I prev() const;
    T& get() const;
    T const& getConst() const;
    bool valid() const;
    bool operator==(I const&) const;
    bool operator!=(I const&) const;
    //Syntatix Sugar
};


#endif //CYCLEDLINKEDLIST_LINKEDLISTITERATOR_H
