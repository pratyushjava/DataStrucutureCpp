#include"threadedtree.h"
//////////////////////////////////
ThreadedTree::ThreadedTree()
{
	root=NULL;
}
///////////////////////////////////
void ThreadedTree::Insert(int data)
{
	Node *temp=new Node(data);
	if(root==NULL)
	{
		root=temp;
		return;
	}
	Node *p=root,*parent = NULL;
	while(p!=NULL)
	{
		if(data==p->GetData())
		{
			delete temp;
			cout<<"\nData already present";
			return;
		}
		parent=p;
		if(data<p->GetData())
		{
			if(p->GetLthread())
			{
				break;
			}
			else
			{
				p=p->GetLeft();
			}
		}
		else
		{
			if(p->GetRthread())
			{
				break;
			}
			else
			{
				p=p->GetRight();
			}
		}
	}

	if(p==NULL)
	{
		if(data<parent->GetData())
		{
			parent->SetLeft(temp);
			temp->SetRight(parent);
			temp->SetRthread(true);
		}
		else
		{
			parent->SetRight(temp);
			temp->SetLeft(parent);
			temp->SetLthread(true);
		}
		return;
	}
	else
	{
		if(data<p->GetData())
		{
		    // Whoever was predecessor of p, will now be predecessor of temp
			temp->SetLeft(p->GetLeft());
			temp->SetLthread(true);

			// Successor of this new node "temp" will be its immediate parent
			temp->SetRight(p);
			temp->SetRthread(true);

			// and temp will be left child of p as data < p->GetData() 
			p->SetLeft(temp);
			p->SetLthread(false);
		}
		else
		{
			// Whoever was successor of p, will now be successor of temp
			temp->SetRight(p->GetRight());
			temp->SetRthread(true);

			// Predecessor of this new node "temp" will be its immediate parent
			temp->SetLeft(p);
			temp->SetLthread(true);

			// and temp will be right child of p as data > p->GetData() 
			p->SetRight(temp);
			p->SetRthread(false);
		}

	}

}
//////////////////////////////////	
void ThreadedTree::Display()
{	Node *curr,*prev;
	if(root==NULL)
	{
		cout<<"\nNo nodes to display";
		return;
	}
	curr=root;
	do
	{	while(curr!=NULL)
		{
			prev=curr;
			if(curr->GetLthread())
			{
				break;
			}
			else
			{
				curr=curr->GetLeft();
			}
		}
		cout<<prev->GetData()<<"\t";
		curr=prev->GetRight();
		
		// Backtrack as long as prev has thread and break when prev does not have successor
		while(prev->GetRthread())
		{
			cout<<curr->GetData()<<"\t";
			prev=curr;
			curr=curr->GetRight();
		}

	}while(curr!=NULL);
	cout << endl;
}