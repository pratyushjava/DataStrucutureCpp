#include"node.cpp"

class binary
{
node *root;
void inorder(node *);
void postorder(node *);
void preorder(node *);

public:

binary();
void insert(char*);
void inorder();
void preorder();
void postorder();


};
