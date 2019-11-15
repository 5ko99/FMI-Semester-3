#pragma once
#include "Node.h"
template <class T>
class LinkedListIterator
{
private:

    Node<T> *ptr;

    template<class U> friend class LinkedList;

public:

    using I = LinkedListIterator<T>;

    LinkedListIterator(Node<T> *p = nullptr): ptr(p) {}

    I next() const
    {
        return I(ptr->next);
    }

    T& get() const
    {
        return ptr->data;
    }

    bool operator==(I const& it) const
    {
        return ptr == it.ptr;
    }

    bool operator!=(I const& it) const
    {
        return ptr != it.ptr;
    }

    //it++
    I operator++(int)
    {
        I prev = *this;
        ++(*this);
        return prev;
    }

    //++it
    I& operator++()
    {
        return *this = next();
    }

    T& operator*() const
    {
        return get();
    }

    operator bool() const
    {
        return ptr != nullptr;
    }
};