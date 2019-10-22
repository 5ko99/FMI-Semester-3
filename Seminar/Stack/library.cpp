#include "library.h"
#include<iostream>
template <class T>
Stack<T>::Stack():topPtr(nullptr) {};
template <class T>
bool Stack<T>::isEmpty() const {
    return topPtr==nullptr;
}
template <class T>
void Stack<T>::push(const T & x) {
    StackNode<T>* newElemPtr = new StackNode<T>;
    newElemPtr->data=x;
    newElemPtr->link=topPtr;
    topPtr=newElemPtr;
}
template <class T>
T Stack<T>::pop() {
    if(isEmpty()){
        std::cerr<<"Pop from empty Stack!!"<<std::endl;
        return T();
    }
    StackNode<T>* tempPtr = topPtr;
    topPtr=topPtr->link;
    T x = tempPtr->data;
    delete tempPtr;
    return x;
}
template <class T>
T Stack<T>::top() const {
    if(isEmpty()){
        std::cerr<<"Top from empty Stack!"<<std::endl;
        return T();
    }
    return topPtr->data;
}
template <class T>
void Stack<T>::deleteStack() {
    while(!isEmpty()){
        pop();
    }
}
template <class T>
Stack<T>::~Stack() {
    deleteStack();
}
template <class T>
void Stack<T>::copy(StackNode<T> * toCopy) {
    if(toCopy== nullptr){
        return;
    }
    copy(toCopy->link);
    push(toCopy->data);
}
template <class T>
void Stack<T>::copyStack(const Stack & s) {
    topPtr=nullptr;
    copy(s.topPtr);
}
template <class T>
Stack<T>::Stack(const Stack & s) {
    copyStack(s);
}
template <class T>
Stack<T>& Stack<T>::operator=(const Stack & s) {
    if(this!=&s){
        deleteStack();
        copyStack(s);
    }
    return *this;
}
