#include<iostream>
#include <list>
#define MAX_V 100
using namespace std;

void bfs_matriz(int grafo[MAX_V][MAX_V], int origem, int vertices){
	int corrente;
	list<int> fila_visitacao;
	bool visitado[vertices];
	for(int i=0; i<vertices; i++){
		visitado[i] = false;
	}
	visitado[origem] = true;
	fila_visitacao.push_back(origem);
	while(!fila_visitacao.empty()){
		corrente  = fila_visitacao.front();
		for(int i=0; i<vertices; i++){
			if(grafo[corrente][i] != -1 && !visitado[i]){
					visitado[i] = true;
					fila_visitacao.push_back(i);
			}
		}
		fila_visitacao.pop_front();
		cout<<corrente<<endl;	
	}
}
