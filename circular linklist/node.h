#include<iostream>
#include<stdlib.h>
using namespace std;
class node
  {
  int data;
  node* next;
  public:
    node(int);
    void setdata(int);
    node* getnext();
    void setnext(node*);
    int getdata();
  };
  
