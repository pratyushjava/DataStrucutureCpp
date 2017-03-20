#include"circularlinklist.h"

int main()
  {
  clinklist l;
  int ch;
  int num;
  int eid=0;

 do
   {
   cout<<"1 for insert at beg\n";
  cout<<"2 for display :\n";
  cout<<"3 for insert at end:\n";
 // cout<<"4 for insert at pos:\n";
 cout<<"4 for delete from begin: \n";
  cout<<"5 for delete at end\n";
  cout<<"6 for search an emp:\n";
 // cout<<"7 for delete at position\n";
  cout<<"7 for exit\n";
   cin>>ch;
  switch(ch)
   {
   case 1:
      //cout<<"please enter the element u want to add ";
      //cin>>ele;
      l.insrtbeg(eid+1);
      break;
   case 2:
       l.display();
       cout<<"\n";
       break;
   case 3:
      //cout<<"please enter the element u want to add ";
      //cin>>ele;
      l.insrtend(eid+1);
      break;
   /*case 4:
      cout<<"please enter the element u want to add ";
      cin>>ele;
      cout<<"please enter the position:";
      cin>>pos;
      l.insrtpos(ele,pos);
      break;*/
   case 4:
      l.delbeg();
      break;
   case 5:
      l.delend();
      break;
    /*case 7:
      cout<<"please enter the position:";
      cin>>pos;
      l.delpos(pos);
      break;*/
      case 6:
        cout<<"please enter the number:\n";
        cin>>num;
        l.searchdt(num);
        break;

   }
 }while(ch!=7);
}
