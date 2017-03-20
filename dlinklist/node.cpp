#include"node.h"
node::node(int data)
  {
      this->data=data;
      this->next=NULL;
      this->prev=NULL;
  }
 void node::setdata(int data)
    {
        this->data=data;
    }
    void node::setnext(node *t)
    {
        this->next=t;
    }
    void node::setprev(node* t)
    {
        this->prev=t;
    }
    node* node::getnext()
    {
        return next;
    }
    node* node::getprev()
    {
        return prev;
    }
    int node::getdata()
    {
        return data;
    }
