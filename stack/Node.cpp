#include <stdio.h>

class Node{
public:
	Node(int d):data(d){};
	Node(){};
	Node *next;	
private:
	int data;
};

