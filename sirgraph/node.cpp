#include"node.h"
///////////////////////////
Node::Node(int data)
{
	this->data=data;
	this->next=NULL;
	this->link=NULL;
	this->status=0;

}
///////////////////////////
int Node::GetData()
{
	return data;
}
///////////////////////////
int Node::GetStatus()
{
	return status;
}
/////////////////////////////
Node *Node::GetNext()
{
	return next;
}
//////////////////////////////
Edge *Node::GetLink()
{
	return link;
}
//////////////////////////////
void Node::SetData(int data)
{
	this->data=data;
}
//////////////////////////////
void Node::SetStatus(int st)
{
	this->status=st;
}
////////////////////////////////
void Node::SetNext(Node *next)
{
	this->next=next;
}
//////////////////////////////////
void Node::SetLink(Edge *link)
{
	this->link=link;
}
//////////////////////////////////