#include <iostream>
using namespace std;

int main()
{ //grafo = {{},{},{}} caso eu ja soubesse
	int vertices, arestas, origem, destino;
	
	cin >> vertices;
	
	bool grafo[vertices][vertices];
	
	
	for(int i = 0; i < vertices; i++)
	{
		for(int j=0; j < vertices;j++)
		{
			grafo[i][j] = false;
		}
	}		
	
	cin >> arestas;
	
	for(int i = 0; i < arestas; i++)
	{
		cin >> origem >> destino; 
		origem--;destino--;//garante que vai estar na linha e coluna correta da matriz isso tudo devido ao vetor começar com 0
		grafo[origem][destino] = true; // como esse grafo nao tem destino ou seja nao tem setinha eu faço ida  e volta
		grafo[destino][origem] = true; // se for um grafico direcionado eu tiro essa opcao
	}	
	
	//for para conseguir mostrar a matriz no final
	for(int i = 0; i < vertices; i++)
	{
		for(int j=0; j < vertices;j++)
		{
			cout << grafo[i][j] << " \t";
		}
		cout << endl;
	}	
	
	return 0;
}
