#include"node.h"
///////////////////////////
class Tree
{
	Node *root;

	void InOrder(Node *);
	void PreOrder(Node *);
	void PostOrder(Node *);
public:
	Tree();
	void Insert(int);
	void InOrder();
	void PreOrder();
	void PostOrder();
	void Remove(int);
};