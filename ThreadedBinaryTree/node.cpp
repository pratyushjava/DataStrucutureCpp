#include"node.h"
///////////////////////////
Node::Node(int data)
{
	this->data=data;
	this->left=NULL;
	this->right=NULL;
	this->lthread=false;
	this->rthread=false;
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
bool Node::GetLthread()
{
	return lthread;
}
///////////////////////////////
bool Node::GetRthread()
{
	return rthread;
}
///////////////////////////////

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
void Node::SetLthread(bool l)
{
	this->lthread=l;
}
//////////////////////////////////
void Node::SetRthread(bool r)
{
	this->rthread=r;
}
/////////////////////////////////////