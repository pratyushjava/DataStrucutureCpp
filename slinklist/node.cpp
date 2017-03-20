#include"node.h"
node::node(int n)
 {
  this->data=n;
  this->next=NULL;
 }
int node::getdata()
  {
   return data;
  }
node* node::getnext()
  {
   return next;
  }
void node::setnext(node*t)
  {
   this->next=t;
  }
