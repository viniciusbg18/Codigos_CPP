#define INF 99999
#include <iostream>
#include <list>
using namespace std;

struct Aresta {
	int origem, destino, peso;	
};

int dijkstra_lista(list<Aresta>grafo[], int vertices, int origem, int destino){
	bool visitado[vertices];
	int pai[vertices], distancia[vertices], atual;
	for(int i=0; i<vertices; i++){
		visitado[i] = false;
		pai[i] = -1;
		distancia[i] = INF;
	}
	distancia[origem] = 0;
	atual = origem;
	while(!visitado[atual]){
		visitado[atual] = true;
		list<Aresta>::iterator it;
		for(it = grafo[atual].begin(); it != grafo[atual].end(); it++){
			int d = it->destino, p = it->peso;
			if(!visitado[d] && distancia[atual] + p < distancia[d]){
				distancia[d] = distancia[atual] + p;
				pai[d] = atual;
			}
		}
		int menor_peso = INF;
		for(int i=0; i<vertices; i++){
			if(!visitado[i] && distancia[i] < menor_peso){
				menor_peso = distancia[i];
				atual = i;
			}
		}
	}
	atual = destino;
	while(atual != origem){
		cout << atual+1 << " <- ";
		atual = pai[atual];
	}
	cout << atual+1 << endl;
	
	return distancia[destino];
}

