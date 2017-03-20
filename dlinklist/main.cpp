#include"dlist.h"
int main()
{
    int ch;int pos;
    dlist dl;
    int data;
    do
    {
        cout<<"1 for insert at begin\n";
        cout<<"2 for display\n";
        cout<<"3 for insert at end\n";
        cout<<"4 for insert at position\n";
        cout<<"5 for delete from begin \n";
        cout<<"6 for delete from end \n";
        cout<<"7 for delete from position \n";
        cout<<"8 for exit \n";
        cin>>ch;
        switch(ch)
        {
            case 1:
               cout<<"enter the data:\n";
               cin>>data;
               dl.insrtbeg(data);
               break;
            case 2:
               dl.display();
               cout<<"\n";
               break;
            case 3:
               cout<<"enter the data:\n";
               cin>>data;
               dl.insrtend(data);
               break;
            case 4:
               cout<<"enter the data:\n";
               cin>>data;
               cout<<"enter the position:";
               cin>>pos;
               dl.insrtpos(data,pos);
               break;
           case 5:
               dl.delbeg();
               break;
           case 6:
               dl.delend();
               break;
           case 7:
                cout<<"enter the position:";
                cin>>pos;
                dl.delpos(pos);
                break;
          
        }

    }while(ch!=8);

}
