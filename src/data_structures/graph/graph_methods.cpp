#include "graph_class.h"
//Methods of Graph
template <typename T>
Graph<T>::Graph(unsigned int vertics){
	this->vertices = vertics;
	this->g->resize(vertices);
	std::cout<<"constr ended";
}

template <typename T>
Graph<T>::Graph(){
	this->vertices = 0;
	std::cout<<"constr2 ended";
}

//We are adding input data through a list;
template <typename T>
void Graph<T>::addNode(){
// 	this->vertices++;
// 	this->g->resize(this->vertices);
// 	std::cout<<"Enter the data to the nodes of the Graph :\n";
// 	T x;
// 	std::cout<<"\nNode "<<this->vertices - 1<<" : ";
// 	std::cin>>x;
// 	if(this->vertices > 0){
// 		this->g[this->vertices - 1].resize(1);
// 		this->g[this->vertices - 1].emplace_back(x);
// 	}
}
template <typename T>
void Graph<T>::showNodes(){
// 	std::cout<<"\nNodes in the graph are::";
// 	for(int i=0;i<this->vertices;i++){
// 			std::cout<<"\nNode "<<i<<" : "<<this->g[i].front();
// 	}
}
// ///We are adding edges by taking the index of the nodes to add edge 
template <typename T>
void Graph<T>::addEdge(){
// 	unsigned int u,v;
// 	this->showNodes();
// 	std::cout<<"\nEnter the Edges (Enter indexes of the nodes as shown above) ::(u->from,v->to)\n";
// 	std::cin>>u>>v;
// 	if(u>this->vertices || v>this->vertices) return;
// 	this->g[u].push_back(this->g[v].front());
// 	std::cout<<"Edge: "<<this->g[u].front()<<" -> "<< this->g[v].front()<<" added.\n";
}

template <typename T>
void Graph<T>::showGraph(){
// 	std::cout<<"Graph is :: \n";
// 	for(int i=0;i<this->vertices;i++){
// 		std::cout<<"Root("<<i<<") :: ";
// 		for(auto node : this->g[i])
// 			std::cout<<node<<" -> ";
// 		std::cout<<"NULL\n";
// 	}
}

//Show available methods
template <typename T>
void Graph<T>::showAvailableMethods(){
	std::cout<<"Menu";
	
	int choice = 1;
	// while(choice != 0 && choice < 5){
		std::cout<<"\nEnter your choice: \n 1. Add Node \n 2. Add Edge b/w nodes \n \
		 3. Print Graph\n 4. Show Nodes of Graph \n 5. Exit\n";
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
	// }
}