#include<iostream>
#include<stdlib.h>
using namespace std;
class Node
{
	int data;
	int balanceFactor;
	Node *left;
	Node *right;

public:
	Node(int);
	int GetData();
	Node *GetLeft();
	Node *GetRight();	
	void SetData(int);
	void SetLeft(Node *);
	void SetRight(Node *);
	int GetBalanceFactor();
	void SetBalanceFactor(int);
};