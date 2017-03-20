#include"emp.h"
emp::emp(int n)
 {
  cout<<"enter the name";
  cin>>empname;
  empno=n;
  //cout<<"enter the no";
  //cin>>empno;
  cout<<"enter the sal";
  cin>>empsal;
 }
void emp::display()
 {
  cout<<"name "<<empname<<"\n";
  cout<<"no "<<empno<<"\n";
  cout<<"salary "<<empsal<<"\n";
 }
 void emp::search(int n)
   {
       if(empno==n)
         {
             this->display();


         }
   }
