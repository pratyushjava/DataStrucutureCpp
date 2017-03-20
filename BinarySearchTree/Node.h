#include<iostream>
#include<stdlib.h>
using namespace std;
class Node
{
	Node *left;
	int data;
	Node *right;

public:
	Node(int);
	int GetData();
	Node *GetLeft();
	Node *GetRight();	
	void SetData(int);
	void SetLeft(Node *);
	void SetRight(Node *);
};