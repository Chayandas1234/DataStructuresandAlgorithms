//Methods of Graph
#include "graph_class.hpp"

//Default Constructor
template <typename T>
Graph<T>::Graph() : vertices{0} {}

//Parameterized Constructor (vertices as parameter)
template <typename T>
Graph<T>::Graph(unsigned int vertics){
	while(vertics--) addNode();
}

//Insert a new node in graph
template <typename T>
void Graph<T>::addNode(){
	std::cout<<"\nEnter the data to the nodes of the Graph :\n";
	T x;
	std::cout<<"Enter data of the Node: ";
	std::cin>>x;
	this->vertices++;
	if(this->vertices > 0){
		g.push_back(std::vector<T>(1,x));
	}
}

//Add edges b/w Nodes by giving indexes of nodes
template <typename T>
void Graph<T>::addEdge(){
	unsigned int u,v;
	this->showNodes();
	std::cout<<"\nEnter the Edges (Enter indexes of the nodes as shown above) ::(u->from,v->to)\n";
	std::cin>>u>>v;
	if(u > this->vertices || v > this->vertices){
		std::cout<<"INVALID!!\n";
		return;
	}
	this->g[u].push_back(this->g[v].front());
	if(u != v)
		this->g[v].push_back(this->g[u].front());
	std::cout<<"Edge: "<<this->g[u].front()<<" <-> "<< this->g[v].front()<<" added.\n";
}

// Print all the nodes present in graph
template <typename T>
void Graph<T>::showNodes(){
	std::cout<<"\nNodes in the graph are:: \n";
	for(auto x: g){
		std::cout<<x[0]<<" ";
	}
}

//Print Graph in Adjacency List Representation
template <typename T>
void Graph<T>::showGraph(){
	std::cout<<"Graph: \n";
	for(auto x: g){
		for(auto y : x){
			std::cout<<y<<" -> ";
		}
		std::cout<<"NULL\n";
	}
}

//Show Available Methods
template <typename T>
void Graph<T>::showAvailableMethods(){	
	int choice = 1;
	while(choice != 0 && choice < 5){
		std::cout<<"\nEnter your choice: \n 1. Add Node \n 2. Add Edge b/w nodes \n 3. Print Graph\n 4. Show Nodes of Graph \n 5. Exit\n";
		std::cin>>choice;
		
		switch (choice){
			case 1:
				addNode();
				break;

			case 2:
				addEdge();
				break;

			case 3:
				showGraph();
				break;

			case 4:
				showNodes();
				break;

			default:
				break;
		}
	}
}