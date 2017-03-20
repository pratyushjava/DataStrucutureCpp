#include"circularlinklist.h"
clinklist::clinklist()
   {
    strt=NULL;
   }
void clinklist::insrtbeg(int n)
  {
    node* temp=new node(n);
     if(strt==NULL)
      {
      strt=temp;
     temp->setnext(strt);
     return;
      }
 
   node*p=strt;
   while(p->getnext()!=strt)
      {
      p=p->getnext();
      }
    temp->setnext(strt);
    p->setnext(temp);
    strt=temp;
     
   }
void clinklist::insrtend(int n)
   {
    node* temp=new node(n);
    if(strt==NULL)
      {
      strt=temp;
      temp->setnext(strt);
      return;
      }
 
      node *p=strt;
      while(p->getnext()!=strt)
        {
         p=p->getnext();
        }
      temp->setnext(strt);
    p->setnext(temp);
    
   }
void clinklist::insrtpos(int n,int pos)
   {
     node* temp=new node(n);
     int i=1;
     if(strt==NULL||pos==1)
      {
     insrtbeg(n);
     return;
      }
    
      node*p=strt;
       while(p->getnext()!=strt)
         {
           if(i==pos-1)
            {
             temp->setnext(p->getnext());
              p->setnext(temp);
              return ;
            }       
           p=p->getnext();
           i++;
         }
      insrtend(n);
      return;
   }
void clinklist::delbeg()
   {
     int delval;
     if(strt==NULL)
       {
       cout<<"under flow\n";
       return;
       }
      node *prev=strt;
      if(prev->getnext()==strt)
       {
       delval=prev->getdata();
       cout<<delval<<"\n";
       delete prev;
       strt=NULL;
       return;
       }
   
    while(prev->getnext()->getnext()!=strt)
      {
      prev=prev->getnext();
      }
    
    delval=strt->getdata();
    prev->getnext()->setnext(strt->getnext());
    delete strt;
    strt=prev->getnext()->getnext();
   cout<<delval<<"\n";
   return;
    
   }
void clinklist::delend()
   {
    int delval;
    if(strt==NULL)
      {
        cout<<"under flow\n";
       return;
      }
    node *prev=strt;
    if(prev->getnext()==strt)
       {
       delval=prev->getdata();
       cout<<delval<<"\n";
       delete prev;
       strt=NULL;
       return;
       }
    while(prev->getnext()->getnext()!=strt)
      {
        prev=prev->getnext();
      }
    delval =prev->getnext()->getdata();
    delete prev->getnext();
    prev->setnext(strt);
    cout<<delval<<"\n";

   }
  void clinklist::delpos(int pos)
   {
    int delval,i=1;
    if(strt==NULL)
      {
      cout<<"underflow\n";
      return;
      }
    if(i==pos)
      {
       delbeg();
       return;
      }
   node*p=strt;node *q;
   while(p->getnext()!=strt)
      {
      if(i==pos-1)
           {
           q=p->getnext();
           delval=q->getdata();
           p->setnext(q->getnext());
          delete q;
          cout<<delval<<"\n";
          return;
           }
     i++;
     p=p->getnext();
     }
  cout<<" overflow occurs\n ";
  return ;
  }
  
     
void clinklist::display()
   {
    node * p=strt;
   if(strt==NULL)
     {
     cout<<"list is empty\n";
     return;
     }
    while(p->getnext()!=strt)
      {
      cout<<p->getdata()<<"\t";
      p=p->getnext();
      }
    cout<<p->getdata();
   }
