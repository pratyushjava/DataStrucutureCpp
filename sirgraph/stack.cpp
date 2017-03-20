#include"stack.h"
/////////////////////////////
Stack::Stack()
{
	top=-1;
}
//////////////////////////////
bool Stack::IsEmpty()
{
	if(top==-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
////////////////////////////
bool Stack::IsFull()
{
	if(top==MAX-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
///////////////////////////
void Stack::Display()
{
	int i;
	if(!IsEmpty())
	{
		for(i=top;i>=0;i--)
		{
		  cout<<"\n"<<s[i];
		}
	}
	else
	{
		cout<<"\nStack Empty";
	}
}
	
/////////////////////////////
void Stack::Push(Node *ele)
{
	if(!IsFull())
	{
		s[++top]=ele;
	}
	else
	{
		cout<<"\nOverflow";
	}
}
///////////////////////////
Node* Stack::Pop()
{
	if(!IsEmpty())
	{
		return s[top--];
	}
	else
	{
		cout<<"\nUnderflow";
	}
}