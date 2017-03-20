#include<iostream>
#include<stdlib.h>
using namespace std;
class Node
{
	int data;
	Node *left;
	Node *right;
	bool rthread;
	bool lthread;

public:
	Node(int);
	int GetData();
	Node *GetLeft();
	Node *GetRight();
	bool GetLthread();
	bool GetRthread();
	void SetData(int);
	void SetLeft(Node *);
	void SetRight(Node *);
	void SetLthread(bool);
	void SetRthread(bool);
};