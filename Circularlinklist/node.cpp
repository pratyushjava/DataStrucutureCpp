#include"node.h"
node::node(int eid)
  {
      //data.empno=eid;
   this->next=NULL;
  }
void node:: setnext(node* t)
  {
  this->next=t;
  }
void node::getdata()
  {
   data.display();
  }
node * node::getnext()
  {
   return next;
  }
  void node::searchdetail(int n)
   {
       data.search(n);
   }
