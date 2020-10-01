#include "Node.h";

#pragma once
class List
{
public:
	Node* start;
	Node* end;
	int count;

	List();
	void InsertAtStart(int value);
	void InsertAtEnd(int value);
	void InsertAtPosition(int value, int position);
	Node* ExtractAtStart();
	Node* ExtractAtEnd();
	Node* ExtractAtPosition(int position);
	Node* GetNode(int value);
	int GetValue(int position);
	bool isEmpty();
	~List() {};
};
