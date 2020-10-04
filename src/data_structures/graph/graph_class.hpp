#ifndef GRAPH_H
#define GRAPH_H
#include <iostream>
#include <vector>
template <typename T>
class Graph{
		std::vector<std::vector<T>> g;
		unsigned int vertices;
		//Add a new node in graph
		void addNode();
		//Print all the nodes present in graph
		void showNodes();
		//Add edges b/w Nodes by giving indexes of nodes
		void addEdge();
		//Print Graph in Adjacency List Representation
		void showGraph();

	public:
		//Constructors
		Graph();
		Graph(unsigned int vertics);

    //Show Available Graph Methods
    void showAvailableMethods();
};
#endif