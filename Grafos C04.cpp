#include<iostream>
using namespace std;

int main()
{
	int vertices, arestas, origem, destino, peso;
	cin>>vertices; 
	int grafo[vertices][vertices];
	
	for (int i=0; i<vertices; i++){
		for (int j=0; j<vertices; j++){
			grafo[i][j] = (-1);
		}
	}
	
	cin>>arestas;
	for(int i=0; i<arestas; i++){
		cin>>origem>>destino>>peso;
		origem--; destino--;
		grafo[origem][destino] = peso;
	}	
	for (int i=0; i<vertices; i++){
		for (int j=0; j<vertices; j++){
			cout << grafo[i][j] << "\t";
		}
		cout<<endl;
	}
	
	
	return 0;
}
