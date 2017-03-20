#include"node.h"
//////////////////////////
node::node(char *d)
{
strcpy(data,d);
this->left=NULL;
this->right=NULL;
}

///////////////////////////

void node::setdata(char *d)
{
strcpy(data,d);
}


///////////////////////////

char* node::getdata()
{
return data;
} 

//////////////////////////

void node::setleft(node* left)

{
this->left=left;
}

//////////////////////////

node* node::getleft()

{
 return left;
}

////////////////////////////

void node::setright(node* right)

{
this->right=right;
}

//////////////////////////

node* node::getright()

{
 return right;
}

