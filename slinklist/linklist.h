#include"node.h"
class linklist
  {
  node* strt;
  public:
    linklist();
    void insrtbeg(int);
    void insrtend(int);
    void insrtpos(int,int);
    void delbeg();
    void delend();
    void delpos(int);
    void display();
  };
