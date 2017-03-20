#include<iostream>
#include<stdlib.h>
#pragma once
using namespace std;
class Edge;
class Node
{
	int data,status;
	Node *next;
	Edge *link;

public:
	Node(int);
	int GetData();
	Node *GetNext();
	Edge *GetLink();
	int GetStatus();
	void SetData(int);
	void SetNext(Node *);
	void SetLink(Edge *);
	void SetStatus(int);
};

class Edge
{
	Node* next;
	Edge* link;
public:
	Edge();
	Node* GetNext();
	Edge* GetLink();
	void SetNext(Node *next);
	void SetLink(Edge *link);
};