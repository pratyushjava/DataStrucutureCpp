#include"binary.h"

binary::binary()
{
root=NULL;
}

//////////////////////

void binary::insert(char* data)
{

node *temp=new node(data);

	if(root==NULL)
		{
                     
                   root=temp;
		    return;
                     
			}
 node *p=root,*parent=NULL;

 while(p!=NULL)
	{
            if(strcmp(p->getdata(),data)==0)
			{

				 cout<<"node already present,could not enter it again \n";
					return;
				}

			else if(strcmp(data,p->getdata())<0)

			{        
				parent=p;		
				p=p->getleft();

				}	
					
				else
				{
	
					parent=p;
					p=p->getright();
						}				
		}	

 if(p==NULL)
	{
		if(strcmp(data,parent->getdata())<0)

			{
				parent->setleft(temp);
				return;

				}
			else
				{

				parent->setright(temp);	
				return;
					
					}
		
		}

}

/////////////////////////////////////////////////////


	void binary::inorder()

	{
		if(root==NULL)
			{
				cout<<"no nodes in tree!!!!\n";
				return;

				}
		
		cout<<"inorder tree representation is:\n";
		inorder(root);
		return;

		}

///////////////////////////////////////////////////////


	void binary::inorder(node *p)

		{
			if(p!=NULL)
				{
					inorder(p->getleft());
					cout<<p->getdata()<<endl;
					inorder(p->getright());					
		
					}
		
			}

////////////////////////////////////////////////////////


	void binary::preorder(node *p)

		{
			if(p!=NULL)
				{
					
					cout<<p->getdata()<<endl;
					inorder(p->getleft());
					inorder(p->getright());	
                    				
		
					}
		
			}
			
//////////////////////////////////////////////////////////


	void binary::postorder(node *p)

		{
			if(p!=NULL)
				{
					inorder(p->getleft());
					inorder(p->getright());
                    cout<<p->getdata()<<endl;					
		
					}
		
			}

//////////////////////////////////////////////////////////////

	void binary::postorder()

	{
		if(root==NULL)
			{
				cout<<"no nodes in tree!!!!\n";
				return;

				}
		
		cout<<"postorder tree representation is:\n\n";
		postorder(root);
		return;

		}

////////////////////////////////////////////////////////////////

	void binary::preorder()

	{
		if(root==NULL)
			{
				cout<<"no nodes in tree!!!!\n";
				return;

				}
		
		cout<<"preorder tree representation is:\n";
		preorder(root);
		return;

		}

////////////////////////////////////////////////////////////////
