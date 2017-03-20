#include"graph.h"
////////////////////////
void main()
{
		Graph g;
		g.Insert(1);
		g.Insert(2);
		g.Insert(3);
		g.Insert(4);
		g.Insert(5);
		g.Insert(6);
		g.Insert(7);
		g.Insert(8);

		cout << "\nNodes: ";
		g.Display();
		cout << endl;

		cout << "DFS: ";
		g.DFS();
		cout << endl;

		cout << "BFS: ";
		g.BFS();
		cout << endl;
}