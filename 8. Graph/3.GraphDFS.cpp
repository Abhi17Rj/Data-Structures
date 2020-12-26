#include <iostream>
#include <stack>
#include <list>

class Graph{
	
	int numOfVertices;
	std::list<int> *adjLists;
	bool *visited;
	
	public:
		Graph(int vertices);
		void addEdges(int source, int destination);
		void DFS(int vertex);
		void DFS2(int vertex);
		
};

Graph::Graph(int vertices){
	numOfVertices = vertices;
	adjLists = new std::list<int>[vertices];
	visited = new bool[vertices];
}

void Graph::addEdges(int src, int dest){
	adjLists[src].push_front(dest);
}

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

int main(){
	
	Graph g(6);
	g.addEdges(0, 1);
	g.addEdges(0, 2);
	g.addEdges(1, 2);
	g.addEdges(2, 3);
	g.addEdges(3, 4);
	g.addEdges(4, 5);
	
	g.DFS2(0);
	std::cout << "\n";
	g.DFS(0);
	return 0;
}
