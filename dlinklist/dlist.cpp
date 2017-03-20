#include"dlist.h"
dlist::dlist()
{
    strt=NULL;
}
void dlist::insrtbeg(int n)
  {
      node*temp=new node(n);
      if(strt==NULL)
       {
        strt=temp;
        temp->setnext(strt);
        temp->setprev(strt);
        return;
       }
       node* p=strt;
       while(p->getnex()!=strt)
       {
           p=p->getnext();
       }
       temp->setnext(strt);
       strt=temp;
       p->setnext(temp);
       temp->setprev(p);
       //p->setprev(temp);
       //temp->setnext(p);
       //strt=temp;
       return;
  }
  void dlist::insrtend(int n)
  {
      node*temp=new node(n);
      if(strt==NULL)
      {
          strt=temp;
        temp->setnext(strt);
        temp->setprev(strt);
        return;

         }
      node*p=strt;
      while(p->getnext()!=strt)
      {
          p=p->getnext();
      }
      temp->setprev(p);
      p->setnext(temp);
      temp->setnext(strt);
      strt->setprev(temp);
      return;
  }
void dlist::insrtpos(int n,int pos)
 {
     node*temp=new node(n);
     int i=1;
     if(strt==NULL||i==pos)
     {
         insrtbeg(n);
         return;
     }
     node*p=strt;
     while(p->getnext()!=strt)
     {
         if(i==pos-1)
         {
             //node *pnxt=p->getnext();
             temp->setnext(p->getnext());
             temp->setprev(p);
             p->getnext()->setprev(temp);
             p->setnext(temp);
             return;
         }
         i++;
         p=p->getnext();
     }
     insrtend(n);
     return;
 }

  void dlist::display()
  {
      if(strt==NULL)
      {
          cout<<"no data\n";
          return;
      }
      node*p=strt;
      while(p->getnext()!=strt)
      {
          cout<<p->getdata()<<"\t";
          p=p->getnext();
      }
      cout<<p->getdata();
  }
void dlist::delbeg()
  {
   int delval;
   if(strt==NULL)
     {
      cout<<"underflow occurs\n";
      return;
     }
  node*p =strt;
  if(p->getnext()==NULL)
    {
     delval=p->getdata();
     strt=NULL;
     delete p;
     cout<<delval<<"\t";
     return;
    }
  delval=p->getdata();

  strt=p->getnext();

  strt->setprev(NULL);
  delete p;
  cout<<delval<<"\t";
  return;
  }
void dlist::delend()
  {
   int delval;
   if(strt==NULL)
     {
     cout<<"underflow occurs\n";
     return;
     }
  node*p=strt;node*prev=NULL;
  if(p->getnext()==NULL)
    {
      strt=NULL;
      delval=p->getdata();
      cout<<delval<<"\n";
      delete p;
      return;
    }
  while(p->getnext()->getnext()!=NULL)
    {
    p=p->getnext();
    }
  node *pfwd=p->getnext();
  delval=pfwd->getdata();
  delete pfwd;
  p->setnext(NULL);
  //prev->setnext(NULL);
  //delval=p->getdata();
  //delete p;
  cout<<delval<<"\n";;
  return;
 }
void dlist::delpos(int pos)
  {
   int delval;int i=1;
   if(strt==NULL||i==pos)
    {
      delbeg();
      return;
    }
   node* p=strt;
   while(p->getnext()!=NULL)
    {
      if(i==pos-1)
        {
         node *pnext=p->getnext();

         if(pnext->getnext()==NULL)
            {
             delend();
             return;
            }
         node* pfwd=pnext->getnext();
         delval=pnext->getdata();
         p->setnext(pfwd);
         pfwd->setprev(p);
         delete pnext;
         cout<<delval<<"\n";
         return;
        }
     i++;
     p=p->getnext();
    }
   cout<<" no data at given pos \n";
   return;
  }






