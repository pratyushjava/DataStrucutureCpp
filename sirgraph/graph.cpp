#include"graph.h"
////////////////////////////
Graph::Graph()
{
		start=NULL;
}
/////////////////////////////
void Graph::Insert(int data)
{
		Node *temp=new Node(data);
		char ans;
		if(start==NULL)
		{
				start=temp;
				return;
		}
		Node *p=start;
		Edge *linkCurr = NULL, *linkPrev = NULL, *t;
		while(p->GetNext()!=NULL)
		{
				p=p->GetNext();
		}
		p->SetNext(temp);
		p=start;
		while(p!=temp)
		{
				linkCurr = NULL, linkPrev = NULL;
				cout<<"\nIs there and edge from "<<p->GetData()<<" to "<<temp->GetData();
				cin>>ans;
				if(ans=='y' || ans=='Y')
				{
						linkCurr = p->GetLink();
						while(linkCurr)
						{
								linkPrev = linkCurr;
								linkCurr = linkCurr->GetLink();
						}
						t = new Edge;
						if(linkCurr == NULL && linkPrev == NULL )
								p->SetLink(t);
						else
								linkPrev->SetLink(t);

						t->SetNext(temp);
				}
				cout<<"\nIs there and edge from "<<temp->GetData()<<" to "<<p->GetData();
				cin>>ans;
				linkCurr = NULL, linkPrev = NULL;
				if(ans=='y' || ans=='Y')
				{
						linkCurr = temp->GetLink();
						while(linkCurr)
						{
								linkPrev = linkCurr;
								linkCurr = linkCurr->GetLink();
						}
						t=new Edge;

						if(linkCurr == NULL && linkPrev == NULL )
								temp->SetLink(t);
						else
								linkPrev->SetLink(t);

						t->SetNext(p);
				}

				p=p->GetNext();
		}
}
/////////////////////////////
void Graph::Display()
{
		Node *p=start;
		if(start==NULL)
		{
				cout<<"\nNo nodes";
				return;
		}
		while(p!=NULL)
		{
				cout<< "\t" <<p->GetData() ;
				p=p->GetNext();
		}
}
/////////////////////////////
void Graph::DFS()
{
		if(start==NULL)
		{
				cout<<"\nNo nodes to display";
				return;
		}
		Node *vtcl=start;
		Edge *hztl;
		// Reset status of all nodes to indicate that they are not yet processed
		while(vtcl!=NULL)
		{
				vtcl->SetStatus(SearchState::RESET);
				vtcl=vtcl->GetNext();
		}
		vtcl=start;

		// Push 1st Vertex in Stack
		Stack stk;
		stk.Push(vtcl);
		vtcl->SetStatus(SearchState::INSERTED);

		// Repeat while stack is not empty
		while(stk.IsEmpty() != true)
		{
				// Pop node from  stack  and process it.
				vtcl=stk.Pop();
				cout<<"\t"<<vtcl->GetData();

				// Mark the status as Processed.
				vtcl->SetStatus(SearchState::PROCESSED );
				
				// Visit next node in AL for this vertex.
				hztl=vtcl->GetLink();
				while(hztl!=NULL)
				{
						// If next of node of list was not pushed / not processed, 
						// then push   it now on stack.
						if(hztl->GetNext()->GetStatus()==1)
						{
								stk.Push(hztl->GetNext());
								// Mark status that it is pushed.
								hztl->GetNext()->SetStatus(SearchState::INSERTED );
						}
						hztl=hztl->GetLink();
				}
		}
}
/////////////////////////////
void Graph::BFS()
{
		if(start==NULL)
		{
				cout<<"\nNo nodes to display";
				return;
		}
		Node *vtcl=start;
		Edge *hztl;
		// Reset status of all nodes to indicate that they are not yet processed
		while(vtcl!=NULL)
		{
				vtcl->SetStatus(SearchState::RESET);
				vtcl=vtcl->GetNext();
		}
		vtcl=start;

		// Insert 1st Vertex in queue
		Queue que;
		que.Insert(vtcl);
		vtcl->SetStatus(SearchState::INSERTED);

		// Repeat while queue is not empty
		while(que.IsEmpty() != true)
		{
				// Remove node from  queue  and process it.
				vtcl=que.Remove();
				cout<<"\t"<<vtcl->GetData();

				// Mark the status as Processed.
				vtcl->SetStatus(SearchState::PROCESSED );
				
				// Visit next node in AL for this vertex.
				hztl=vtcl->GetLink();
				while(hztl!=NULL)
				{
						// If next of node of list was not Inserted / not processed, 
						// then Insert   it now on queue.
						if(hztl->GetNext()->GetStatus()==1)
						{
								que.Insert(hztl->GetNext());
								// Mark status that it is Inserted.
								hztl->GetNext()->SetStatus(SearchState::INSERTED );
						}
						hztl=hztl->GetLink();
				}
		}
}
