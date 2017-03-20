#include"queue.h"
///////////////////////////
Queue::Queue()
{
	front=-1;
	rear=-1;
}
////////////////////////////
bool Queue::IsEmpty()
{
	if(front==-1 && rear==-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
////////////////////////////
bool Queue::IsFull()
{
	if((front==0 && rear==MAX-1) || (front==rear+1))
	{
		return true;
	}
	else
	{
		return false;
	}
}
/////////////////////////////
void Queue::Insert(Node* ele)
{
	if(!IsFull())
	{
		if(IsEmpty())
		{
			front=0;
			rear=0;
		}
		else
		{
			rear=(rear+1)%MAX;
		}
		q[rear]=ele;
	}
	else
	{
		cout<<"\nOverflow";
	}
}
//////////////////////////////////
Node* Queue::Remove()
{
	if(!IsEmpty())
	{
		Node * ele=q[front];
		if(rear==front)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front=(front+1)%MAX;
		}
		return ele;
	}
	else
	{
		cout<<"\nUnderflow";
	}

}
////////////////////////////////////
void Queue::Display()
{
	int i;
	if(!IsEmpty())
	{
		if(front<=rear)
		{
			for(i=front;i<=rear;i++)
			{
				cout<<"\n"<<q[i];
			}
		}
		else
		{
			for(i=front;i<MAX;i++)
			{
				cout<<"\n"<<q[i];
			}
			for(i=0;i<=rear;i++)
			{
				cout<<"\n"<<q[i];
			}
		}
	}
	else
	{
		cout<<"\nNo elements";
	}
}