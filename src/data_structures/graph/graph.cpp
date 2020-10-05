#include<iostream>
#include "graph_class.hpp"
#include "graph_methods.cpp"

using namespace std;

//Main Driver Sample Program
int main(){
	int v = 4;
	cout<<"Create Graph:\n1) Empty\n2) Add n nodes initially\n";
	cin>>v;
	if(v == 1){
		Graph<int> g; 
		g.showAvailableMethods();
	}
	else{
		cout<<"n = ";
		cin>>v;
		Graph<int> g(v); 
		g.showAvailableMethods();
	}
  return 0;
}