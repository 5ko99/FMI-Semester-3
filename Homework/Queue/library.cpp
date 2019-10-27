#include "library.h"
#include <iostream>
//Helping Methods
template <class T>
void LQueue<T>::copyQueue(LQueue<T> const& queue) {
    head= tail= nullptr;
    if(queue.empty()){
        return;
    }
    QueueElement<T>* elemPtr = queue.front();
    while(elemPtr){
        push(elemPtr->data);
        elemPtr=elemPtr->next;
    }
}
template <class T>
void LQueue<T>::eraseQueue() {
    while(!empty()){
        pop();
    }
}

//Big 4-th
template <class T>
LQueue<T>::LQueue():head(nullptr), tail(nullptr) {}
template <class T>
LQueue<T>::LQueue(const LQueue<T> & queue) {
    copyQueue(queue);
}
template <class T>
LQueue<T>& LQueue<T>::operator=(const LQueue<T> & queue) {
    if(this!=&queue){
        eraseQueue();
        copyQueue(queue);
    }
    return *this;
}
template <class T>
LQueue<T>::~LQueue() {
    eraseQueue();
}

//Queue Methods
template <class T>
bool LQueue<T>::empty() {
    return tail == nullptr;
}
template <class T>
void LQueue<T>::push(const T & x) {
    auto* newElemPtr=new QueueElement<T>;
    newElemPtr->data=x;
    newElemPtr->next= nullptr;
    if(!empty()){
        tail->next=newElemPtr;
    }else{
        head=newElemPtr;
    }
    tail=newElemPtr;
}
template <class T>
T LQueue<T>::pop() {
    if(empty()){
        std::cerr<<"pop() from empty queue! \n";
        return T();
    }
    QueueElement<T>* elemPtr = head;
    T x = elemPtr->data;
    head=head->next;
    if(head== nullptr){
        tail= nullptr;
    }
    delete elemPtr;
    return x;
}
template <class T>
T LQueue<T>::front() const {
    if(empty()){
        std::cerr<<"front() from empty queue! \n";
        return T();
    }
    return head->data;
}