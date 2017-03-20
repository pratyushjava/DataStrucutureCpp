#include"linklist.h"
linklist::linklist()
 {
  this->strt=NULL;
 }
void linklist::insrtbeg(int data)
 {
  node*temp= new node(data);
  if(strt==NULL)
    {
      strt=temp;
      return;
    }
  temp->setnext(strt);
  strt=temp;
 }
void linklist::insrtend(int data)
 {
  node* temp=new node(data);
  if(strt==NULL)
    {
      strt=temp;
      return;
    }
  node *p=strt;
  while(p->getnext()!=NULL)
   {
    p=p->getnext();
   }
  p->setnext(temp);
 }
 void linklist::insrtpos(int data,int pos)
 {
  int i=1;
  node* temp=new node(data);
  if(strt==NULL||i==pos)
    {
     insrtbeg(data);
     return;
    }
 node*p=strt;
 while(p->getnext()!=NULL)
   {
   if(i==pos-1)
     {
      temp->setnext(p->getnext());
      p->setnext(temp);
      return;
     }
    i++;
    p=p->getnext();
  }
 insrtend(data);
 }
void linklist::delbeg()
  {
    int delval;
    if(strt==NULL)
      {
       cout<<"underflow\n";
       return;
      }
   node *p= strt;
   delval= p->getdata();
   strt=p->getnext();
   delete p;
   cout<<delval<<"\n";
  }
void linklist::delend()
 {
   int delval;
   if(strt==NULL)
     {
      cout<<"underflow\n";
      return;
     }
  node*p =strt;node *prev=NULL;
  while(p->getnext()!=NULL)
   {
   prev=p;
   p=p->getnext();
   }
if(prev==NULL)
  {
    strt=NULL;
    delval=p->getdata();
    cout<<delval<<"\n";
    delete p;
  }
else
  {
   delval=p->getdata();
   prev->setnext(NULL);
   cout<<delval<<"\n";
   delete p;
  }
 
 }
void linklist::delpos(int pos)
  {
  int delval;
  int i=1;
  if(strt==NULL||i==pos)
   {
     delbeg();
     return;
   }
 node*p =strt;node*pfwd;
 while(p->getnext()!=NULL)
   {
    if(i==pos-1)
      {
       pfwd=p->getnext();
       delval=pfwd->getdata();
       p->setnext(pfwd->getnext());
       delete pfwd;
       cout<<delval<<"\n";
       return;
       }
    i++;
    p=p->getnext();
   }
  cout<<"position is not present \n";
  
  }
 void linklist::display()
  {
   node *p=strt;
   if(strt==NULL)
     {
      cout<<"no element ";
      return;
     }
  while(p!=NULL)
    {
     cout<<p->getdata()<<"\t";
     p=p->getnext();
    }
  }

