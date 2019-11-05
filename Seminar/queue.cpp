#include "LQueue.h"

template <typename T>
LQueue<T>::LQueue() {
	front = rear = nullptr;
}

template <typename T>
LQueue<T>::~LQueue() {
	deleteQueue();
}

template <typename T>
LQueue<T>::LQueue(LQueue<T> const& q)
{
	copyQueue(q);
}

template <typename T>
LQueue<T>& LQueue<T>::operator=(LQueue<T> const& q) {
	if (this != &q) {
		deleteQueue();
		copyQueue(q);
	}

	return *this;
}

template <typename T>
void LQueue<T>::push(T const& x) {
	//TODO
    Node<T> newElemPtr = new Node<T>();
    newElemPtr->data=x;
    newElemPtr->next=nullptr;
    if(isEmpty()){
       front=newElemPtr;
       
    }else{
        rear->next=newElemPtr;
    }
    rear=newElemPtr;
}

template <typename T>
T LQueue<T>::pop() {
	if (isEmpty()) {
		std::cerr << "Empty queue";
		return T();
	}
	else {
		Node<T> *p = front;
		T result = p->data;

		front = front->next;
		if (front == nullptr)
			rear = nullptr;

		delete p;
		
		return result;
	}
}

template <typename T>
T LQueue<T>::head() const {
	if (isEmpty()) {
		std::cerr << "Empty queue";
		return T();
	}
	else {
		return front->data;
	}
}

template <typename T>
bool LQueue<T>::isEmpty() const {
	return front == nullptr;
}

template <typename T>
void LQueue<T>::copyQueue(LQueue<T> const& q) {
	front = rear = nullptr;

	Node<T> *sourceNode = q.front, *destNode = nullptr, *prev;

	if (sourceNode) {
		front = prev = new Node<T>(sourceNode->data);
		sourceNode = sourceNode->next;

		while (sourceNode != nullptr) {
			destNode = new Node<T>(sourceNode->data);

			prev->next = destNode;
			prev = destNode;
			sourceNode = sourceNode->next;
		}

		rear = destNode;
	}
}

template <typename T>
void LQueue<T>::deleteQueue() {
	while (!isEmpty())
		pop();
}
