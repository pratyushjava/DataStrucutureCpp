#include"AVLTree.h"
///////////////////////
void main()
{
	int ch=0,ele;
	Tree t;

	while(ch!=6)
	{
		cout<<"\n1.Insert";
		cout<<"\n2.Inorder";
		cout<<"\n3.Preorder";
		cout<<"\n4.Postorder";
		cout<<"\n5.Delete";
		cout<<"\n6.Exit";
		cout<<"\nEnter your choice: ";
		cin>>ch;
	
		switch(ch)
		{
		case 1:
			cout<<"\nEnter the element: ";
			cin>>ele;
			t.Insert(ele);
			break;
		case 2:
			t.InOrder();
			break;
		case 3:
			t.PreOrder();
			break;
		case 4:
			t.PostOrder();
			break;
		case 5:
			cout<<"\nEnter the element to be deleted: ";
			cin>>ele;
			t.Remove(ele);
			break;
		case 6:
			exit(0);
			break;
		default:
			cout<<"\nPlease enter a valid choice.";

		}
	}
}