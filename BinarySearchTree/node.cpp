#include"node.h"
///////////////////////////
Node::Node(int data)
{
	this->data=data;
	this->left=NULL;
	this->right=NULL;
}
///////////////////////////
int Node::GetData()
{
	return data;
}
/////////////////////////////
Node *Node::GetRight()
{
	return right;
}
//////////////////////////////
Node *Node::GetLeft()
{
	return left;
}
//////////////////////////////
void Node::SetData(int data)
{
	this->data=data;
}
////////////////////////////////
void Node::SetRight(Node *right)
{
	this->right=right;
}
//////////////////////////////////
void Node::SetLeft(Node *left)
{
	this->left=left;
}
//////////////////////////////////