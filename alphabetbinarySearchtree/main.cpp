#include"binary.cpp"

int main()

{
int a,y;
char x[40];
binary b;
while(1)
	 {
		cout<<"\n\n1.insert data in binary tree \n2.tree in post order \n3.tree in preorder \n4. tree in in order \n5.exit\n\n";
		cout<<"enter your choice:";
		cin>>a;

		switch(a)

		{

			case 1:
				cout<<"enter the data for node:\n";
				cin>>x;
				b.insert(x);
				break;
				
			case 2:
                 b.postorder();
				break;

			case 3:
                 b.preorder();
				break;
				
			case 4:
				b.inorder();
				break;
			
		     
             case 5: return 0;	
			}
	}
	getch();
return 0;

}
