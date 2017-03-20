#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class rqlist
 {
  int rqno;
  static int rqid;
  char rqsts;
  string rqdesc;
  public:
    rqlist();
  void insrtrq();
  void disp();
  void delrq();
  bool searchno(int);
  void processrq();
  int retrnrq();
  //void getrqdesc();
 };          
