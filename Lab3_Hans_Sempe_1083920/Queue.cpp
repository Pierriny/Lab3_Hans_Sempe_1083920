#include "Queue.h"

Queue::Queue() {
	internalList = new List();
}

Queue::~Queue() {
	internalList = nullptr;
}

void Queue::Insert(int value) {
	internalList->InsertAtEnd(value);
}

Node* Queue::Dequeue() {
	return internalList->ExtractAtStart();
}

bool Queue::isEmpty() {
	return internalList->isEmpty();
}



