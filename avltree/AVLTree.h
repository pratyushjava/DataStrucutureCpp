#include"node.h"
///////////////////////////
class Tree
{
	Node *root;
	void InOrder(Node *);
	void PreOrder(Node *);
	void PostOrder(Node *);
	Node * Insert( Node *, int, bool &);
	Node * _Remove (Node *, int, bool &);
	Node* Tree :: BalanceRight ( Node *root, bool &hResult );
	Node* Tree :: BalanceLeft ( Node *root, bool &hResult );
	Node* Tree :: del ( Node *succ, Node *node, bool &hResult );
public:
	Tree();
	void Insert(int);
	void InOrder();
	void PreOrder();
	void PostOrder();
	void Remove(int);
};