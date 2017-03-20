#include"node.h"
Edge::Edge()
{
	next = NULL;
	link = NULL;
}

Node* Edge::GetNext()
{
	return next;
}

Edge* Edge::GetLink()
{
	return link;
}

void Edge::SetNext(Node *next)
{
	this->next = next;
}

void Edge::SetLink(Edge *link)
{
	this->link = link;
}