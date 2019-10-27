#ifndef STACK_LIBRARY_H
#define STACK_LIBRARY_H
template <class T>
struct StackNode{
    T data;
    StackNode<T>* link;
};
template <class T>
class Stack{
private:
    StackNode<T>* topPtr;
    void copy(StackNode<T>*);
    void deleteStack();
    void copyStack(const Stack&);
public:
    Stack();
    Stack(const Stack&);
    Stack& operator=(const Stack&);
    ~Stack();

    [[nodiscard]] bool isEmpty() const;
    void push(const T&);
    T pop();
    T top() const;
};

#endif //STACK_LIBRARY_H