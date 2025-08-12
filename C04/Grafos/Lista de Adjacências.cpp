#include <iostream>
#include <list>
#define INF 999999
using namespace std;
struct Aresta{
	int origem, destino, peso;
};

int main(){
	int vertices, arestas, origem, destino, peso;
	cin >> vertices;
	list<Aresta> grafo[vertices];
	cin >> arestas;
	for(int i=0; i<arestas; i++){
		cin >> origem >> destino >> peso;
		origem--, destino--;
		grafo[origem].push_back({origem, destino, peso});
		grafo[destino].push_back({destino, origem, peso});
	}
	for(int i=0; i<vertices; i++){
		list<Aresta>::iterator it;
		cout << i << ": ";
		for(it = grafo[i].begin(); it != grafo[i].end(); it++){
			cout << "(";
			cout << it->destino << "," << it->peso;
			cout << "), ";
		}
		cout<<endl;
	}
	return 0;
}
	
