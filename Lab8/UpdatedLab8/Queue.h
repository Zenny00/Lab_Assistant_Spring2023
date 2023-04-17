#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include <cstdlib>
#include "ListCollection.h"

using namespace std;
template<class T>
class Queue {
	private:
		ListCollection<T> queue;
	public:
		Queue();
		~Queue();
		void displayQueue(bool nl = false) const;
		Queue(const Queue &obj);
		const Queue operator=(const Queue &right);
		void clear();
		int size();
		void enqueue(T);
		T dequeue();
		bool isEmpty();
};

template<class T>
Queue<T>::Queue() {
}

template<class T>
Queue<T>::~Queue() {
}

template<class T>
Queue<T>::Queue(const Queue &obj) {
	queue = obj.queue;
}

template<class T>
const Queue<T> Queue<T>::operator=(const Queue &right) {
	queue = right.queue;
	return *this;
}

template<class T>
void Queue<T>::displayQueue(bool nl) const {
	queue.displayList(nl);
}

template<class T>
int Queue<T>::size() {
	return queue.size();
}

template<class T>
void Queue<T>::enqueue(T elt) {
	queue.pushBack(elt);
}

template<class T>
T Queue<T>::dequeue() {
	return queue.popFront();
}

template<class T>
void Queue<T>::clear() {
	queue.clear();
}

template<class T>
bool Queue<T>::isEmpty() {
	return queue.size() == 0;
}

#endif
