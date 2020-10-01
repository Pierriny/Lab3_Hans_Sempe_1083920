#include "List.h";
#pragma once
class Queue
{
private: List* internalList;
public: void Insert(int value);
	  Node* Dequeue();
	  bool isEmpty();
	  Queue();
	  ~Queue();
};

