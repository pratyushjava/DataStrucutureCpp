#include"que.h"

que::que()
 {
  front=-1;
  rear=-1;
 }
bool que::isempty()
 {
   if(front==-1&&rear==-1)
    return true;
   else
     return false;
 }
bool que::isfull()
  {
   if(front==(rear+1)%(maxsize) ||front==rear+1)
    return true;
   else
    return false;
  }
void que::insrt()
  {
   if(isfull())
    {
      cout<<"please wait request r processing..........\n";
      rq[front].processrq();
      cout<<"the processed request is:\n";
      del();
      cout<<"now enter new request.....\n";
     
     
     return;
    }
   if(front==-1&&rear==-1)
     {
      rear=rear+1;
      front=front+1;
      rq[rear].insrtrq();
      cout<<"ur requset no is: "<<rq[rear].retrnrq()<<"\n";
      return;
     }
   rear=(rear+1)%(maxsize);
   rq[rear].insrtrq();
   cout<<"ur requset no is: "<<rq[rear].retrnrq() <<"\n";
   //rq[front].processrq();
   //del();
  }
void que::display(int n)
  {
   int i=0;
  while(i<maxsize)
   {
 
  rq[i].searchno(n);
   i++;
    }
  
   }
  /*if(front<=rear)
    {
     for(i=0;i<=front;i++)
       {
         rq[i].disp();
         
       }
     for(i=rear;i<maxsize;i++)
      {
         rq[i].disp();
      }
    }
  else
   {
     int a=0;
     for(a=0;a<=rear;a++)
      {
        rq[a].disp();
      }
    for(a=front;a<maxsize;a++)
     {
      rq[front].disp();
      }
  
   /*while(i<maxsize)
     {
     rq[i].disp();
     i++;
    }*/
  

void que::del()
  {
   if(isempty())
      {
     cout<<"underflow";
     return;
      }
  if(front==rear)
    {
     rq[front].delrq();
     front=-1;
     rear=-1;
     return;
    }
  rq[front].delrq();
  front=(front+1)%(maxsize);
  }
 void que::search(int n)
   {
     int i=0;
  
   while(i<maxsize)
    {
    rq[i].searchno(n);
    i++;
   }
  cout<<" no is not present \n";
 }
  

