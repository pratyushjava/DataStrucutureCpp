#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class node
{
char data[40];
node *left;
node *right;
public:
node()
{}
node(char*);
char* getdata();
void setdata(char*);
void setleft(node *);
node* getleft();
void setright(node *);
node* getright();

};
