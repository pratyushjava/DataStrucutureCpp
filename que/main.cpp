#include"que.h"
int main()
 {
 int ch;
 que q;
 int no;
 do
  {
  cout<<"1 for insert the request description:\n";
  cout<<"2 for display the request status and details:\n";
  //cout<<"3 for search ur request:\n";
 // cout<<"4 for delete :\n";
  cin>>ch;
  switch(ch)
   {
    case 1:
          
          q.insrt();
          break;
    case 2:
          cout<<"enter ur request no :";
          cin>>no;
          q.display(no);
          break; 
   /*case 3:
         cout<<"enter the no u want to searc:\n";
         cin>>no;
         q.search(no);
         break;*/
 /* case 4:
        q.del();
        break;*/
   
   }
  }while(ch!=5);
 }
