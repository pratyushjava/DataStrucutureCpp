#include"tnode.h"

node::node(int n)
   {
   this->data=n;
   this->lt=NULL;
   this->rt=NULL;
   }
int node::getdata()
   {
   return data;
   }
node* node::getlt()
   {
   return lt;
   }
node* node::getrt()
   {
   return rt;
   }
void node::setdata(int n)
   {
   this->data=n;
   }
void node::setrt(node* t)
   {
   this->rt=t;
   }
void node::setlt(node *t)
   {
    this->lt=t;
   }


