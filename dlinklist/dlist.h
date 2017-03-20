#include"node.h"
class dlist
 {
     node* strt;
     public:
      dlist();
      void insrtbeg(int);
      void insrtend(int);
      void insrtpos(int,int);
      void delbeg();
      void delend();
      void delpos(int);
      void display();
 };
