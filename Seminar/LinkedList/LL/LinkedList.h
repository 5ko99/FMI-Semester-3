#pragma once
#include "LinkedListIterator.h"
#include "Node.h"
#include<iostream>
template <class T>
class LinkedList
{
public:
    using I=LinkedList<T>;

private:

    Node<T> *front, *back;

    void copyList(LinkedList<T> const &l)
    {
        front = back = nullptr;

        for (I it = l.begin(); it; it++)
            insertEnd(*it);
    }

    void deleteList()
    {
        while (!isEmpty())
        {
            T temp;
            deleteBegin(temp);
        }
    }

    I findPrev(I const &it)
    {
        I result = begin();

        while (result && result.ptr->next != it.ptr)
            result++;

        return result;
    }

public:

    LinkedList<T>() : front(nullptr), back(nullptr) {}

    LinkedList<T>(LinkedList<T> const &l)
    {
        copyList(l);
    }

    LinkedList<T>& operator=(LinkedList<T> const& l)
    {
        if (this != &l)
        {
            deleteList();
            copyList(l);
        }
        return *this;
    }

    ~LinkedList<T>()
    {
        deleteList();
    }

    I begin() const
    {
        return I(front);
    }

    I end() const
    {
        return I(back);
    }

    bool isEmpty() const
    {
        return front == nullptr;
    }

    T& getAt(I it) const
    {
        return it.get();
    }

    bool insertBefore(T const &x, I it)
    {
        if (!it || isEmpty())
            return false;

        if (it == begin())
        {
            Node<T> *p = new Node<T>(x, front);
            if (front == nullptr)
            {
                back = p;
            }
            front = p;

            return true;
        }

        return insertAfter(x, findPrev(it));
    }

    bool insertAfter(T const & x, I it)
    {
        //[TODO]
        if(isEmpty()){
            front=back=new Node<T>(x);
            return true;
        }
        if(!it){
            return false;
        }
        I temp = it.next();
        Node<T>* p = new Node(x,it.ptr->next);
        it.ptr->next=p;
        if(back==it) back=p;

        return true;
    }

    void insertBegin(T const& x)
    {
        insertBefore(x, begin());
    }

    void insertEnd(T const &x)
    {
        insertAfter(x, end());
    }

    bool deleteAt(T &x, I it)
    {
        if (!it || isEmpty())
            return false;

        if (it == begin())
        {
            x = front->data;
            Node<T> *p = front;
            front = front->next;

            if (front == nullptr)
                back = nullptr;

            delete p;
            return true;
        }

        return deleteAfter(x, findPrev(it));
    }

    bool deleteBegin(T &x)
    {
        return deleteAt(x, begin());
    }

    bool deleteBefore(T &x, I it)
    {
        if (isEmpty() || !it || it == begin())
            return false;

        return deleteAt(x, findPrev(it));
    }

    bool deleteAfter(T &x, I it)
    {
        if (isEmpty() || !it || it == end())
            return false;

        Node<T> *p = it.ptr->next;
        it.ptr->next = p->next;
        x = p->data;

        if (back == p)
            back = it.ptr;

        delete p;

        return true;
    }

    void print()
    {
        for (I it = begin(); it; it++)
            std::cout << *it << ' ';
        std::cout << std::endl;
    }
};