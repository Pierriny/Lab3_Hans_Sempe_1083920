#include "List.h"

List::List() {
	start = nullptr;
	end = nullptr;
	count == 0;
};

//Insert Operations
void List::InsertAtStart(int value) {
	Node* new_node = new Node();
	new_node->value = value;

	if (isEmpty()) { //The list is empty
		start = new_node;
		end = new_node;
	}
	else { //The list is not empty
		new_node->next = start;
		start = new_node;
	}
	count++;
}


void List::InsertAtEnd(int value) {
	Node* new_node = new Node();
	new_node->value = value;

	if (isEmpty()) { //The list is empty
		start = new_node;
		end = new_node;
	}
	else { //The list is not empty
		end->next = new_node;
		end = new_node;
	}
	count++;
}

void List::InsertAtPosition(int value, int position) {
	Node* new_node = new Node();
	new_node->value = value;

	if (isEmpty() || (position == 0)) { //The list is empty
		InsertAtStart(value);
	}
	else { //The list is not empty
		if (position >= count) {
			InsertAtEnd(value);
		}
		else { //Position in the middle
			Node* pretemp = start;
			Node* temp = start->next;
			int index = 1;
			while ((temp) && (index < position)) {
				pretemp = temp;
				temp = temp->next;
				index++;
			}
			new_node->next = temp;
			pretemp->next = new_node;
		}
	}
	count++;
}

//Extract operation
Node* List::ExtractAtStart() {
	Node* temp = start;
	if (!isEmpty()) {
		start = start->next;
		if (count == 1) {
			end = start;
		}
		count--;
	}
	return temp;
}


Node* List::ExtractAtEnd() {
	Node* temp = end;
	if (!isEmpty()) {
		if (count == 1) {
			end = end->next;
			start = end;
		}
		else {
			Node* pretemp = start;
			temp = pretemp->next;
			while (temp != end) {
				pretemp = temp;
				temp = pretemp->next;
			}
			pretemp->next = temp->next;
			end = pretemp;
		}
		count--;
	}
	return temp;
}

Node* List::ExtractAtPosition(int position) {
	Node* temp = start;
	if (!isEmpty()) {
		if ((count == 1) || (position == 0)) {
			return ExtractAtStart();
		}
		else {
			if (position >= count) {
				return ExtractAtEnd();
			}
			else {
				Node* pretemp = start;
				temp = pretemp->next;
				int index = 1;
				while ((temp) && (index < position)) {
					pretemp = temp;
					temp = pretemp->next;
					index++;
				}
				pretemp->next = temp->next;
				count--;
			}
		}
	}
	return temp;
}

//Search operations
Node* List::GetNode(int value) {
	Node* temp = start;
	while ((temp) && (temp->value != value)) {
		temp = temp->next;
	}
	return temp;
}

int List::GetValue(int position) {
	if ((position >= 0) && (position < count)) {
		Node* temp = start;
		int index = 0;
		while ((temp) && (index < position)) {
			temp = temp->next;
			index++;
		}
		return temp->value;
	}
	return -1;
}

bool List::isEmpty() {
	return count == 0;
}