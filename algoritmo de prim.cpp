#include <iostream>
#include <list>
#define INF = 100000000000000
using namespace std;

struct Aresta{
	int origem, destino, peso;
};

int prim_lista(list<Aresta> grafo[], int vertices, int origem){
	bool visitado[vertices];
	int pai[vertices], distancia[vertices], atual;
	for(int i=0; i<vertices; i++){
		visitados[i] = false;
		pai[i] = -1;
		distancia = INF;
	}
	atual = origem;
	distancia[atual] = 0;
	while(!visitado[atual]){ // pode ser escrito visitado[atual] == false tbm 
		visitado[atual] = true;
		list<Aresta>::iterator it;
		for(it = grafo[atual].begin(); it! = grafo[atual].end(); it++){
			int d = it->destino, p = it->peso;
			if(!visitado[d] && p < distancia[d]){
				distancia[d] = p;
				pai[d] = atual;	
			}
		}
		int menor_distancia = INF;
		for(int i=0; i<vertices; i++){
			if(!visitado[i] && distancia[i] < menor_distancia){
				menor_distancia = distancia[i];
				atual = i;
			}
		}
	}
}

int main()
{
	int vertices, arestas, origem, destino, peso;
	cin>>vertices;
	list<Aresta> grafo[vertices];
	cin>>arestas;
	for(int i=0; i<arestas; i++){
		cin>>origem>>destino>>peso;
		grafo[origem].push_back({origem, destino, peso});
		grafo[destino].push_back({destino, origem, peso});
	}
	for(int i=0; i<vertices; i++){
		list<Aresta>::iterator it;
		for(it = grafo[i].begin(); it != grafo[i].end(); it++){
			cout << "(";
			cout << it->destino << "," << it->peso;
			cout<< ")";

		}
		cout<<endl;
	}
	return 0;
}
