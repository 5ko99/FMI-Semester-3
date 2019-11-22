#ifndef CYCLEDLINKEDLIST_LIBRARY_H
#define CYCLEDLINKEDLIST_LIBRARY_H

#include "LinkedListIterator.h"
template <class T>
struct Node{
    Node(T const & _data,Node* _next= nullptr):data(_data),next(_next){};
    T data;
    Node* next;
};


template <class T>
class CycledLinkedList{
public:
    using I = LinkedListIterator<T>;
private:
    using Node = Node<T>;
    Node *front,*back;
    void copy(LinkedList cons& l);
};

#endif //CYCLEDLINKEDLIST_LIBRARY_H