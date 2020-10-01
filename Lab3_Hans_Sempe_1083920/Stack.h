#include "List.h";
#pragma once
class Stack
{

private: List* internalList;
public:
	Stack();
	Node* Peek();
	void Insert(int value);
	bool isEmpty();
};
