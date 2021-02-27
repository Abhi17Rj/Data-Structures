#include <iostream>
#include <stack>
#include <list>
#include <queue>
#include <utility>

class Graph{
	
	int numOfVertices;
	std::list<std::pair<int, int>> *adjLists;
	bool *visited;
	
	public:
		Graph(int vertices);
		void addEdges(int source, int destination, int weight);
		void prim(int vertex);
		void kruskal(int vertex);	
};

Graph::Graph(int vertices){
	numOfVertices = vertices;
	adjLists = new std::list<std::pair<int, int>>[vertices];
	visited = new bool[vertices];
}

void Graph::addEdges(int src, int dest, int weight){
	std::pair<int, int> add1, add2;
	add1 = std::make_pair(dest, weight);
	add2 = std::make_pair(src, weight); 
	adjLists[src].push_back(add1);
	adjLists[dest].push_back(add2);
}

// Implementation of Prim's Algo
void Graph::prim(int vertex){
	int count = 0;
	int sum = 0;
	visited[vertex] = true;
	std::list<std::pair<int, int>>::iterator i;
	std::list<std::pair<int, int>>::iterator ref; 
	while(count < numOfVertices){
		int min = INT_MAX;
		for(i = adjLists[vertex].begin(); i != adjLists[vertex].end(); ++i){
			int index = *i;
			if(!visited[index]){
				if (min > adjLists[*i].second){
					min = adjLists[*i].second;
					ref = i;
				} 
			}
		}
		visited[*ref] = true;
		vertex = *ref;
		sum += min;
		count++;
	}
	print(sum);
}

// Implementation of DFS using Recursion
void Graph::kruskal(int vertex){

}

int main(){
	
	Graph g(6);
	g.addEdges(0, 1, 4);
	g.addEdges(0, 2, 12);
	g.addEdges(0, 3, 9);
	g.addEdges(2, 4, 7);
	g.addEdges(4, 5, 2);
	g.addEdges(1, 2, 5);
	g.addEdges(2, 3, 11);
	g.addEdges(3, 4, 8);
	
	std::cout << "\n Prims ";
	g.prim(0);
	//std::cout << "\n Kruskal ";
	//g.kruskal(0);
	
	return 0;
}
