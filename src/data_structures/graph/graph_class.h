//Graph
#ifndef GRAPH_H
#define GRAPH_H
#include <iostream>
#include <vector>

template <typename T>
class Graph{
		std::vector<std::vector<T>> *g;
		unsigned int vertices;
		//method for adding data to nodes
		void addNode();
		void showNodes();
		//Method for adding a new edge between nodes u and v
		void addEdge();
		//Printing the Adjacency List Nodes of Graph
		void showGraph();

	public:
		//Constructors
		Graph();
		Graph(unsigned int ver);
    //show availale methods
    void showAvailableMethods();
};
#endif //GRAPH_H