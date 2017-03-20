#include"node.h"

class clinklist
  {
  node* strt;
  public:
    clinklist();
    void  insrtbeg(int);
    void insrtend(int);
   // void insrtpos(int ,int);
    void  delbeg();
    void delend();
    //void delpos(int);
    void display();
    void searchdt(int);
  };
