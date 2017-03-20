#include<stdlib.h>
#include<iostream>
using namespace std;
class node
  {
    int data;
    node* next;
    node* prev;
    public:
      node(int);
      void setdata(int);
      void setnext(node*);
      void setprev(node*);
      node* getnext();
      node* getprev();
      int getdata();

  };
