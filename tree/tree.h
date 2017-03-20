#include"tnode.h"

class tree
 {
  node *root;
  void inorder(node*);
  void preorder(node*);
  void postorder(node*);
  public:
   tree();
   void insrt(int);
   void del(int);
   void inorder();
   void preorder();
   void postorder();
  };
