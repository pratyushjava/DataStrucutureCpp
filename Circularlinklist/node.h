#include"emp.h"
class node
  {
   emp data(int);
   node* next;
  public:
    node(int);
    node* getnext();
    void setnext(node*);
    void getdata();
    void searchdetail(int);
  };

