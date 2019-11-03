#include <iostream>


template <typename T>
class LQueue
{
private:
	Node<T> *front, *rear;
	void deleteQueue();
	void copyQueue(LQueue<T> const&);

public:
	LQueue();
	~LQueue();
	LQueue(LQueue<T> const&);
	LQueue<T>& operator=(LQueue<T> const&);
	void push(T const&);
	T pop();
	T head() const;
	bool isEmpty() const;
};
