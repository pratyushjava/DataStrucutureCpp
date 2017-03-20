#include"rqlist.h"
int rqlist::rqid=0;
rqlist::rqlist()
 {

 }
 void rqlist::insrtrq()
  {
  rqid=rqid+1;
  rqno=rqid;
 
  rqsts='p';
  cout<<" enter the descripetion :";
  cin>>rqdesc;
  
 }
 void rqlist::disp()
  {
   
   cout<<"request id :"<<rqno<<"\n";
   cout<<"request description :"<<rqdesc<<"\n";
   cout<<"request status :"<<rqsts<<"\n";
  
    }
 bool rqlist::searchno(int n)
   {
    if(n<rqid)
      {
        if(rqno==n)
        {
        disp();
        return true;
        }
       else
          {
           //cout<<"ur request has been processed";
          return false;
         
          }
      }
  
       //cout<<"ur request has been processed \n";
       //return false;
      //} 
    //if(rqno==n)
      //{
      //disp();
     // return true;
      //}
    //else
     // return false;
   
   
   }
void rqlist::delrq()
  {
    rqsts='r';
    disp();
  }
void rqlist::processrq()
   {
     rqsts='r';
     //delrq();
     
   }
int rqlist::retrnrq()
  {
    return rqno;
  }
 
  
 /*void rqlist::getrqdesc()
  {
   cout<<" enter the descripetion :";
   getline(cin,rqdesc);
   insrtrq();
  }*/

