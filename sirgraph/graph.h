#include"stack.h"
#include"Queue.h"
////////////////////////
class Graph
{
	Node *start;

	enum SearchState
	{
			RESET					= 1,
			INSERTED			= 2,
			PROCESSED		= 3
	};
public:
	Graph();
	void Insert(int);
	void Display();
	void DFS();
	void BFS();
};