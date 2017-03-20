#include"tree.h"

int main()
 {
  tree t;int data;
  int ch;
  do
   {
    cout<<"1 for insert:\n";
    cout<<"2 for inorder:\n";
    cout<<"3 for preorder: \n";
    cout<<"4 for postorder :\n";
    cout<<"5 for delete the data:\n";
    cout<<"6 for exit:\n";
    cin>>ch;
    switch(ch)
      {
       case 1:
            cout<<"please insert the data:\n";
            cin>>data;
            t.insrt(data);
            break;
       case 2:
           t.inorder();
           cout<<"\n";
           break;
      case 3:
           t.preorder();
           cout<<"\n";
           break;
      case 4:
           t.postorder();
           cout<<"\n";
           break;
     case 5:
           cout<<"please insert the data:\n";
            cin>>data;
           t.del(data);
           break;
      }
   }while(ch!=6);
 }
