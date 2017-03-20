#include<iostream>
#include<stdlib.h>
using namespace std;
class node
  {
  int data;
  node* lt;
  node* rt;
  public:
    node(int);
    void setdata(int);
    node* getlt();
    node* getrt();
    void setrt(node*);
    void setlt(node*);
    int getdata();
  };
  
