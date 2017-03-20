#include"tree.h"

tree::tree()
  {
  root=NULL;
  }
 void tree::insrt(int n)
    {
    node *temp=new node(n);
    if(root==NULL)
      {
      root=temp;
      return;
      }
    node *p=root;
    node* prnt=NULL;
   while(p!=NULL)
     {
     if(p->getdata()==n)
        {
        cout<<"element is already present";
        delete temp;
        return;
        }
      prnt=p;
     if(n<p->getdata())
       {
        p=p->getlt();
       }
     else
       {
       p=p->getrt();
       }
     }
    if(n>prnt->getdata())
          {
          prnt->setrt(temp);
          }
   else
      {
      prnt->setlt(temp);
      }
   }
void tree::del(int n)
  {
    node* p=root;node*prnt=NULL;node* xsucc=NULL;
    while(p!=NULL)
      {
      if(n==p->getdata())
         {
          break;
         }
     prnt=p;
     if(n<p->getdata())
       {
         p=p->getlt();
       }
    else
       {
         p=p->getrt();
       }
     }
   if(p==NULL)
     {
      cout<<"there is no element\n";
      return;
     }
   //if n has no child
    if(p->getlt()==NULL && p->getrt()==NULL)
      {
       if(p==root)
         {
          root==NULL;
          delete p;
          return;
         }
      else
        {
          if(p==prnt->getlt())
            {
              prnt->setlt(NULL);
              
            }
          if(p==prnt->getrt())
            {
              prnt->setrt(NULL);
              
            }
        }
       delete p;
       return;
      }
    //if n has 1 child(left child)
     if(p->getlt()!=NULL&&p->getrt()==NULL)
       {
         if(p==root)
          {
           root=p->getlt();
           delete p;
           return;
          }
         else
          {
            if(p==prnt->getlt())
              {
                prnt->setlt(p->getlt());
              
              }
            if(p==prnt->getrt())
              {
                prnt->setrt(p->getlt());
                
              }
          }
         delete p;
         return;
       }
  //if n has 1 child(right child)
   if(p->getlt()==NULL&&p->getrt()!=NULL)
       {
         if(p==root)
          {
           root=p->getrt();
           delete p;
           return;
          }
         else
          {
            if(p==prnt->getlt())
              {
                prnt->setlt(p->getrt());
               
              }
            if(p==prnt->getrt())
              {
                prnt->setrt(p->getrt());
               
              }
          }
         delete p;
         return;
       }
   //if n has 2 child
   if(p->getrt()!=NULL && p->getlt()!=NULL)
       {
            prnt=p;
	   xsucc=p->getrt();
	   while(xsucc->getlt()!=NULL)
	   {
		  prnt=xsucc;
		  xsucc=xsucc->getlt();
	   }
	   
	   if(xsucc->getdata() < prnt->getdata() )
		   prnt->setlt(xsucc->getrt());
	   else
		  prnt->setrt(xsucc->getrt());
	   
	   p->setdata(xsucc->getdata());
	   delete xsucc;
           return;
       }
    
  }
void tree::inorder(node *t)
    {
     if(t!=NULL)
      {
       inorder(t->getlt());
       cout<<"\t"<<t->getdata();
       inorder(t->getrt());
      }
    }
void tree ::preorder(node *t)
   {
    if(t!=NULL)
      {
      cout<<"\t"<<t->getdata();
      preorder(t->getlt());
      preorder(t->getrt());
      }
   }
void tree::postorder(node *t)
   {
    if(t!=NULL)
     {
      postorder(t->getlt());
      postorder(t->getrt());
      cout<<"\t"<<t->getdata();
     }
   }
void tree::inorder()
   {
    inorder(root);
   }
void tree::preorder()
   {
    preorder(root);
   }
void tree::postorder()
  {
   postorder(root);
  }
    
