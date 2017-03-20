#include"rqlist.h"
#define maxsize 3
class  que
 {
  rqlist rq[maxsize];
  int front;
  int rear;
 public:       
   que();
   bool isfull();
   bool isempty();
   void insrt();
  void display(int);
  void search(int );
void del();
// void processrq();
   
 };
