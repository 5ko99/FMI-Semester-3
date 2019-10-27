#ifndef QUEUE_LIBRARY_H
#define QUEUE_LIBRARY_H
//Queue Element definition
template <class T>
struct QueueElement{
    T data;
    QueueElement<T>* next;
};
template <class T>
class LQueue{
private:
    //Queue Elements
    QueueElement<T> *head, *tail;
    //Helping Methods
    void copyQueue(LQueue<T> const&);
    void eraseQueue();
public:
    //Big 4
    LQueue();
    LQueue(LQueue<T> const&);
    LQueue<T>& operator=(LQueue<T> const&);
    ~LQueue();

    //Queue Methods
    bool empty();
    void push(T const&);
    T pop();
    T front() const;
};

#endif //QUEUE_LIBRARY_H