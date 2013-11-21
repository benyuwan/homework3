#include <stdio.h>
#include "Node.h"

class Stack{
public:
	void push(int item){
	Node *node = new Node(item);
	node->next = head->next;
	head->next = node;
	}
	int pop(){
	Node *p = head->next;
	head->next = p->next;
	delete p;
	}
	bool isEmpty(){
	return(head->next);
	}
	Stack(){
	head = new Node();
	}
private:
	Node *head;
}
