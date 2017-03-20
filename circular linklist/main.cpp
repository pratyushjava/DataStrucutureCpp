#include"circularlinklist.h"

int main()
  {
  clinklist l;int ele;
  int ch;int pos;
  
 
 do
   {
   cout<<"1 for insert at beg\n";
  cout<<"2 for display :\n";
  cout<<"3 for insert at end:\n";
  cout<<"4 for insert at pos:\n";
 cout<<"5 for delete from begin: \n";
  cout<<"6 for delete at end\n";
  cout<<"7 for delete at position\n";
  cout<<"8 for exit\n";
   cin>>ch;
  switch(ch)
   {
   case 1:
      cout<<"please enter the element u want to add ";
      cin>>ele;
      l.insrtbeg(ele);
      break;
   case 2:
       l.display();
       cout<<"\n";
       break;
   case 3:
      cout<<"please enter the element u want to add ";
      cin>>ele;
      l.insrtend(ele);
      break;
   case 4:
      cout<<"please enter the element u want to add ";
      cin>>ele;
      cout<<"please enter the position:";
      cin>>pos;
      l.insrtpos(ele,pos);
      break;
   case 5:
      l.delbeg();
      break;
   case 6:
      l.delend();
      break;
    case 7:
      cout<<"please enter the position:";
      cin>>pos;
      l.delpos(pos);
      break;
    
   }
 }while(ch!=8);
}
