#include<iostream>
#include<stdlib.h>
#include "Node.h"
#define MAX 50
using namespace std;
class Stack
{
	Node * s[MAX];
	int top;
public:
	Stack();
	bool IsEmpty();
	bool IsFull();
	void Display();
	void Push(Node *);
	Node* Pop();
};