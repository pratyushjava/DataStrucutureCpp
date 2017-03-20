#include"AVLTree.h"
/////////////////////////////
Tree::Tree()
{
	root=NULL;
}
//////////////////////////////
void Tree::Insert(int data)
{
	bool hResult;
	root  = Insert(root, data, hResult);
}
//////////////////////////////
Node * Tree::Insert(Node *subRoot, int data, bool &hResult)
{
	if(subRoot == NULL)
	{
		subRoot = new Node(data);
		hResult = true;
		return subRoot;
	}

    // All the previous stack frames will know that insertion has happened
	// so balance factor needs to be modified during backtracking
	Node *parent, *child;

	// Insertion on the left side
	if(data < subRoot->GetData())
	{
		subRoot->SetLeft(
		));

		if(true == hResult)
		{
			switch(subRoot->GetBalanceFactor())
			{
				// Value -1 would thus mean that earlier tree was heavier on the right side
				// Now that we have inserted on left side, at this node tree is perfectly balanced
				case -1:
				{
					subRoot->SetBalanceFactor(0);
					// When at a node tree is made to balance perfectly,
					// balancefactor of no other node will change during backtracking
					hResult = false;
					break;
				}
				case 0:
				{
					subRoot->SetBalanceFactor(1);
					// Dont set hResult to false here because balancefactor of nodes
					// will change in in backtracking as we are not balancing anything here
					break;
				}
				case 1:
				{
					// The left side was heavier and we inserted on the left side
					parent = subRoot->GetLeft();
					// If parent is also heavier on the left, it means that it is Left outer case( Single rotation )
					if(1 == parent->GetBalanceFactor())
					{
						cout << "Performing right rotation along " << subRoot->GetData() << ".\n";
						subRoot->SetLeft(parent->GetRight());
						parent->SetRight(subRoot);
						subRoot = parent;
					}
					else
					{
						cout << "Performing double rotation (left) along " << parent->GetData() << ".\n";
						child = parent->GetRight();
						parent->SetRight(child->GetLeft());
						child->SetLeft(parent);
						subRoot->SetLeft(child->GetRight());
						child->SetRight(subRoot);

						if(1 == child->GetBalanceFactor())
							subRoot->SetBalanceFactor(-1);
						else
							subRoot->SetBalanceFactor(0);

						if(-1 == child->GetBalanceFactor())
							parent->SetBalanceFactor(1);
						else
							parent->SetBalanceFactor(0);

						subRoot = child;
					}
					subRoot->SetBalanceFactor(0);
					hResult = false;
					break;
				}
			}
		}
	}

	// Insertion on the right side
	if(data > subRoot->GetData())
	{
		subRoot->SetRight( Insert(subRoot->GetRight(), data, hResult));

		if(true == hResult)
		{
			switch(subRoot->GetBalanceFactor())
			{
				// Value 1 would thus mean that earlier tree was heavier on the left side
				// Now that we have inserted on right side, at this node tree is perfectly balanced
				case 1:
				{
					subRoot->SetBalanceFactor(0);
					// When at a node tree is made to balance perfectly,
					// balancefactor of no other node will change during backtracking
					hResult = false;
					break;
				}
				case 0:
				{
					subRoot->SetBalanceFactor(-1);
					// Dont set hResult to false here because balancefactor of nodes
					// will change in in backtracking as we are not balancing anything here
					break;
				}
				case -1:
				{
					// The right side was heavier and we inserted on the right side
					parent = subRoot->GetRight();
					// If parent is also heavier on the right, it means that it is Right outer case( Single rotation )
					if(parent->GetBalanceFactor() == -1)
					{
						cout << "Performing right rotation along " << subRoot->GetData() << ".\n";
						subRoot->SetRight(parent->GetLeft());
						parent->SetLeft(subRoot);
						subRoot->SetBalanceFactor(0);
						subRoot = parent;
					}
					else
					{
						cout << "Performing double rotation (right) along " << parent->GetData() << ".\n";
						child = parent->GetLeft();
						parent->SetLeft(child->GetRight());
						child->SetRight(parent);
						subRoot->SetRight(child->GetLeft());
						child->SetLeft(subRoot);

						if(-1 == child->GetBalanceFactor())
							subRoot->SetBalanceFactor(1);
						else
							subRoot->SetBalanceFactor(0);

						if(1 == child->GetBalanceFactor())
							parent->SetBalanceFactor(-1);
						else
							parent->SetBalanceFactor(0);

						subRoot = child;
					}
					subRoot->SetBalanceFactor(0);
					hResult = false;
					break;
				}
			}
		}
	}
	return subRoot;
}
///////////////////////////////////////
void Tree::InOrder(Node *st)
{
	if(st!=NULL)
	{
		InOrder(st->GetLeft());
		cout<<"\t"<<st->GetData();
		InOrder(st->GetRight());
	}
}
//////////////////////////////////////
void Tree::PreOrder(Node *st)
{
	if(st!=NULL)
	{
		cout<<"\t"<<st->GetData();
		PreOrder(st->GetLeft());
		PreOrder(st->GetRight());
	}
}
//////////////////////////////////////
void Tree::PostOrder(Node *st)
{
	if(st!=NULL)
	{
		PostOrder(st->GetLeft());
		PostOrder(st->GetRight());
		cout<<"\t"<<st->GetData();
	}

}
//////////////////////////////////////
void Tree::InOrder()
{
	if(root==NULL)
	{
		cout<<"\nNo nodes";
		return;
	}
	cout<<"\nInorder traversal";
	InOrder(root);
}
/////////////////////////////////////
void Tree::PreOrder()
{
	if(root==NULL)
	{
		cout<<"\nNo nodes";
		return;
	}
	cout<<"\nPreorder traversal";
	PreOrder(root);
}
//////////////////////////////////////
void Tree::PostOrder()
{

	if(root==NULL)
	{
		cout<<"\nNo nodes";
		return;
	}
	cout<<"\nPostorder traversal";
	PostOrder(root);
}
//////////////////////////////////////
void Tree::Remove(int data)
{
	bool hResult = false;
   if(root==NULL)
   {
	   cout<<"\nNo nodes to delete";
	   return;
   }
   else
   {
	   root = _Remove(root, data, hResult);
   }

}

Node* Tree :: _Remove ( Node *root, int data, bool &hResult )
{
	Node *node ;

	//if ( root -> GetData() == 13 )
	//	cout << root -> GetData() ;

	if ( root == NULL )
	{
		cout <<"\nNumber "<<data << " not present in AVL tree." ;
		return ( root ) ;
	}
	else
	{
		if ( data < root -> GetData() )
		{
			root -> SetLeft(_Remove ( root -> GetLeft(), data, hResult )) ;
			if ( hResult )
				root = BalanceRight ( root, hResult ) ;
		}
		else
		{
			if ( data > root -> GetData() )
			{
				root ->SetRight(_Remove ( root -> GetRight(), data, hResult ) );
				if ( hResult )
					root = BalanceLeft ( root, hResult ) ;
			}
			else
			{
				node = root ;
				if ( node -> GetRight() == NULL )
				{
					root = node -> GetLeft() ;
					hResult = true ;
					delete ( node ) ;
				}
				else
				{
					if ( node -> GetLeft() == NULL )
					{
						root = node -> GetRight() ;
						hResult = true ;
						delete ( node ) ;
					}
					else
					{
						node ->SetRight( del ( node -> GetRight(), node, hResult )) ;
						if ( hResult )
							root = BalanceLeft ( root, hResult ) ;
					}
				}
			}
		}
	}
	return ( root ) ;
}

Node* Tree :: del ( Node *succ, Node *node, bool &hResult )
{
	Node *temp = succ ;

	if ( succ -> GetLeft() != NULL )
	{
		succ -> SetLeft(del ( succ -> GetLeft(), node, hResult )) ;
		if ( hResult )
			succ = BalanceRight ( succ, hResult ) ;
	}
	else
	{
		temp = succ ;
		node -> SetData(succ -> GetData());
		succ = succ -> GetRight() ;
		delete ( temp ) ;
		hResult = true ;
	}
	return ( succ ) ;
}

// To balance the tree, if right sub-tree is higher
Node* Tree :: BalanceRight ( Node *root, bool &hResult )
{
	Node *temp1, *temp2 ;

	switch ( root -> GetBalanceFactor() )
	{

		case 1 :

			root -> SetBalanceFactor(0) ;
			break ;

		case 0 :

			root -> SetBalanceFactor(-1) ;
			hResult  = false ;
			break ;

		case -1 :

			temp1 = root -> GetRight() ;
			if ( temp1 -> GetBalanceFactor() <= 0 )
			{
				cout << "\nLeft rotation." ;
				root ->SetRight( temp1 -> GetLeft() );
				temp1 -> SetLeft(root) ;

				if ( temp1 -> GetBalanceFactor() == 0 )
				{
					root -> SetBalanceFactor(-1) ;
					temp1 -> SetBalanceFactor(1) ;
					hResult = false ;
				}
				else
				{
					root -> SetBalanceFactor(0);
					temp1 -> SetBalanceFactor(0) ;
				}
				root = temp1 ;
			}
			else
			{
				cout << "\nDouble rotation, right then left." ;
				temp2 = temp1 -> GetLeft() ;
				temp1 -> SetLeft(temp2 -> GetRight()) ;
				temp2 ->SetRight(temp1);
				root ->SetRight(temp2 -> GetLeft() );
				temp2 -> SetLeft(root) ;

				if ( temp2 -> GetBalanceFactor() == -1 )
					root -> SetBalanceFactor(1) ;
				else
					root -> SetBalanceFactor(0) ;
				if ( temp2 -> GetBalanceFactor() == 1 )
					temp1 -> SetBalanceFactor(-1) ;
				else
					temp1 -> SetBalanceFactor(0) ;
				root = temp2 ;
				temp2 -> SetBalanceFactor(0) ;
			}
	}
	return ( root ) ;
}

// To balance the tree, if left sub-tree is higher
Node* Tree :: BalanceLeft ( Node *root, bool &hResult )
{
	Node *temp1, *temp2 ;

	switch ( root -> GetBalanceFactor() )
	{

		case -1 :

			root -> SetBalanceFactor(0) ;
			break ;

		case 0 :

			root -> SetBalanceFactor(1) ;
			hResult = false ;
			break ;

		case 1 :

			temp1 = root -> GetLeft() ;
			if ( temp1 -> GetBalanceFactor() >= 0 )
			{
				cout << "\nRight rotation." ;
				root -> SetLeft(temp1 -> GetRight()) ;
				temp1 ->SetRight(root);

				if ( temp1 -> GetBalanceFactor() == 0 )
				{
					root -> SetBalanceFactor(1) ;
					temp1 -> SetBalanceFactor(-1) ;
					hResult = false ;
				}
				else
				{
					root -> SetBalanceFactor(0);
					temp1 -> SetBalanceFactor(0) ;
				}
				root = temp1 ;
			}
			else
			{
				cout << "\nDouble rotation, left then right." ;

				temp2 = temp1 -> GetRight() ;
				temp1 ->SetRight(temp2 -> GetLeft() );
				temp2 -> SetLeft(temp1) ;
				root -> SetLeft(temp2 -> GetRight()) ;
				temp2 ->SetRight( root );

				if ( temp2 -> GetBalanceFactor() == 1 )
					root -> SetBalanceFactor(-1) ;
				else
					root -> SetBalanceFactor(0) ;

				if ( temp2-> GetBalanceFactor() == -1 )
					temp1 -> SetBalanceFactor(1) ;
				else
					temp1 -> SetBalanceFactor(0);
				root = temp2 ;
				temp2 -> SetBalanceFactor(0);
			}
	}
	return ( root ) ;
}

