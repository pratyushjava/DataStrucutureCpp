#include<iostream>
#include<stdlib.h>
#include "Node.h"
#define MAX 50
using namespace std;
class Queue
{
	Node* q[MAX];
	int front,rear;
public:
	Queue();
	bool IsEmpty();
	bool IsFull();
	void Insert(Node *);
	Node * Remove();
	void Display();
};