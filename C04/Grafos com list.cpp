#include <iostream>
#include <list>
using namespace std;

struct Aresta{
	int origem, destino, peso;
};

int main()
{
	int vertices, arestas, origem, destino;
	cin>>vertices;
	list<Aresta> grafo[vertices];
	
	cin>>arestas;
	for(int i=0; i<arestas; i++){
		cin>>origem>>destino;
		origem--; destino--; // pois começa em vertice 1
		grafo[origem].push_back({origem, destino, 1});
		grafo[destino].push_back({destino, origem, 1});
	}
	
	list<Aresta>::iterator p;
	for(int i = 0; i<vertices; i++){
		cout<<i+1<<": ";
		for (p = grafo[i].begin(); p != grafo[i].end(); p++){
			cout<<p->destino + 1<<" ";
			// não há peso 
		}
		cout<<endl;
	}
	
	
	return 0;
}
