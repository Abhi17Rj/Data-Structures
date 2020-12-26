#include <iostream>
#include <stack>
#include <list>
#include <queue>

class Graph{
	
	int numOfVertices;
	std::list<int> *adjLists;
	bool *visited;
	
	public:
		Graph(int vertices);
		void addEdges(int source, int destination);
		void DFS(int vertex);
		void DFS2(int vertex);
		void BFS(int vertex);	
};

Graph::Graph(int vertices){
	numOfVertices = vertices;
	adjLists = new std::list<int>[vertices];
	visited = new bool[vertices];
}

void Graph::addEdges(int src, int dest){
	adjLists[src].push_back(dest);
	adjLists[dest].push_back(src);
}

// Implementation pf DFS using Stack
void Graph::DFS(int vertex){
	for(int i=0; i < numOfVertices; i++){
		visited[i] = false;
	}
	std::stack<int> stk;
	visited[vertex] = true;
	stk.push(vertex);
	
	std::list<int>::iterator i;
	
	while(!stk.empty()){
		int currVertex = stk.top();
		std::cout << currVertex << " ";
		stk.pop();
		
		for (i = adjLists[currVertex].begin(); i != adjLists[currVertex].end(); ++i){
			if(!visited[*i]){
				visited[*i] = true;
				stk.push(*i);
			}
		}
	}
}

// Implementation of DFS using Recursion
void Graph::DFS2(int vertex){
	visited[vertex] = true;
	std::list<int> adjList = adjLists[vertex];
	
	std::cout << vertex << " ";
	
	std::list<int>::iterator i;
	for(i = adjLists[vertex].begin(); i != adjLists[vertex].end(); ++i){
		if(!visited[*i]){
			DFS2(*i);
		}
	}
}

// Implementation of BFS using Queue
void Graph::BFS(int vertex){
	for(int i=0; i<numOfVertices; ++i){
		visited[i] = false;
	}
	
	std::queue<int> q;
	q.push(vertex);
	visited[vertex] = true;
	
	std::list<int>::iterator i;
	
	while(!q.empty()){
		int val = q.front();
		std::cout << val << " ";
		q.pop();
		
		for(i = adjLists[val].begin(); i != adjLists[val].end(); ++i){
			if(!visited[*i]){
				q.push(*i);
				visited[*i] = true;
			}
		}
	}
}

int main(){
	
	Graph g(6);
	g.addEdges(0, 1);
	g.addEdges(0, 2);
	g.addEdges(0, 3);
	g.addEdges(2, 4);
	g.addEdges(4, 5);
	
	std::cout << "\n DFS (Recurrsion): ";
	g.DFS2(0);
	std::cout << "\n DFS (Iterative): ";
	g.DFS(0);
	std::cout << "\n BFS : " ;
	g.BFS(0);
	return 0;
}
