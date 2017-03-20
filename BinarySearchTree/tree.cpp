#include"tree.h"
/////////////////////////////
Tree::Tree()
{
	root=NULL;
}
//////////////////////////////
void Tree::Insert(int data)
{
	Node *temp=new Node(data);
	if(root==NULL)
	{
		root=temp;
		return;
	}
	Node *p=root,*parent=NULL;
	while(p!=NULL)
	{
		if(data==p->GetData())
		{
			cout<<"\nData already present";
			delete temp;
			return;
		}
		parent=p;
		if(data<p->GetData())
		{
			p=p->GetLeft();
		}
		else
		{
			p=p->GetRight();
		}
	}
	if(data<parent->GetData())
	{
		parent->SetLeft(temp);
	}
	else
	{
		parent->SetRight(temp);
	}
}
///////////////////////////////////////
void Tree::InOrder(Node *st)
{
	if(st!=NULL)
	{
		InOrder(st->GetLeft());
		cout<<"\t"<<st->GetData();
		InOrder(st->GetRight());
	}
}
//////////////////////////////////////
void Tree::PreOrder(Node *st)
{
	if(st!=NULL)
	{
		cout<<"\t"<<st->GetData();
		PreOrder(st->GetLeft());		
		PreOrder(st->GetRight());
	}
}
//////////////////////////////////////
void Tree::PostOrder(Node *st)
{
	if(st!=NULL)
	{
		PostOrder(st->GetLeft());		
		PostOrder(st->GetRight());
		cout<<"\t"<<st->GetData();
	}

}
//////////////////////////////////////
void Tree::InOrder()
{
	if(root==NULL)
	{
		cout<<"\nNo nodes";
		return;
	}
	cout<<"\nInorder traversal";
	InOrder(root);
}
/////////////////////////////////////
void Tree::PreOrder()
{	
	if(root==NULL)
	{
		cout<<"\nNo nodes";
		return;
	}
	cout<<"\nPreorder traversal";
	PreOrder(root);
}
//////////////////////////////////////
void Tree::PostOrder()
{
	
	if(root==NULL)
	{
		cout<<"\nNo nodes";
		return;
	}
	cout<<"\nPostorder traversal";
	PostOrder(root);
}
//////////////////////////////////////
void Tree::Remove(int data)
{
   if(root==NULL)
   {
	   cout<<"\nNo nodes to delete";
	   return;
   }
   Node *p=root,*parent=NULL,*xsucc=NULL;
   while(p!=NULL)
   {
	   if(p->GetData()==data)
	   {
		   break;
	   }
	   parent=p;
	   if(data<p->GetData())
	   {
		   p=p->GetLeft();
	   }
	   else
	   {
		   p=p->GetRight();
	   }
   }
   if(p==NULL)
   {
	   cout<<"\nData not present";
	   return;
   }
   //Case 1: When N has no children
   if(p->GetLeft()==NULL && p->GetRight()==NULL)
   {
	   if(p==root)
	   {
		  root=NULL;
	   }
	   else
	   {
		   if(p==parent->GetLeft())
		   {
			   parent->SetLeft(NULL);
		   }
		   else
		   {
			   parent->SetRight(NULL);
		   }
	   }
	   delete p;
	   return;
   }
   //Case 2: When N has exactly 1 child (Left Child)
   if(p->GetLeft()!=NULL && p->GetRight()==NULL)
   {
	   if(p==root)
	   {
		   root=p->GetLeft();
	   }
	   else
	   {
		 if(p==parent->GetLeft())
		   {
			   parent->SetLeft(p->GetLeft());
		   }
		   else
		   {
			   parent->SetRight(p->GetLeft());
		   }
	   }
	   delete p;
	   return;
   }

   //Case 2: When N has exactly 1 child (Right Child)
   if(p->GetLeft()==NULL && p->GetRight()!=NULL)
   {
	   if(p==root)
	   {
		   root=p->GetRight();
	   }
	   else
	   {
		 if(p==parent->GetLeft())
		   {
			   parent->SetLeft(p->GetRight());
		   }
		   else
		   {
			   parent->SetRight(p->GetRight());
		   }
	   }
	   delete p;
	   return;
   }

   //Case 3: When N has 2 children
   if(p->GetLeft()!=NULL && p->GetRight()!=NULL)
   {
	   parent=p;
	   xsucc=p->GetRight();
	   while(xsucc->GetLeft()!=NULL)
	   {
		  parent=xsucc;
		  xsucc=xsucc->GetLeft();
	   }
	   
	   if(xsucc->GetData() < parent->GetData() )
		   parent->SetLeft(xsucc->GetRight());
	   else
		  parent->SetRight(xsucc->GetRight());
	   
	   p->SetData(xsucc->GetData());
	   delete xsucc;
   }

}