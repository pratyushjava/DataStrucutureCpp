#include"linklist.h"
int main()
 {
 int ch;
 int pos;
 int data;
 linklist l;
 do
  {
  cout<<"1 for insrt at beg:\n";
  cout<<"2 for insrt at end:\n";
  cout<<"3 for insrt at pos:\n";
  cout<<"4 for display:\n";
  cout<<"5 for delete at beg:\n";
  cout<<"6 for delete at end:\n";
  cout<<"7 for delete at pos:\n";
  cout<<"8 for exit :\n";
  
  cin>>ch;
    switch(ch)
     {
      case 1:
            cout<<"enter the data u want to add ";
            cin>>data;
            l.insrtbeg(data);
            break;
     case 2:
           cout<<"enter the data u want to add ";
            cin>>data;
            l.insrtend(data);
            break;
    case 3:
          cout<<"enter the data u want to add \n";
            cin>>data;
          cout<<"enter the position ";
           cin>>pos;
            l.insrtpos(data,pos);
            break;
   case 4:
         l.display();
         cout<<"\n";
         break;
  case 5:
          
          l.delbeg();
            break;
   case 6:
          
           l.delend();
            break;
  case 7:
           cout<<"enter the position ";
           cin>>pos;
            l.delpos(pos);
            break;
     }
  }while(ch!=8);
return 0;
}
