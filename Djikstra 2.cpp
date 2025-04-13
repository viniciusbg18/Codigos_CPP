#include <iostream>
#include <list>

#define INF 99999

using namespace std;

struct Aresta {
  int origem, destino, peso; // destino = end / origem = start 
};

void cria_aresta(list<Aresta>grafo[], int u, int v, int p, int orientado) {
  grafo[u].push_back({u, v, p});
  if (orientado == 0) {
    grafo[v].push_back({v, u, p}); // se ele não for orientado, ambas as direções funcionam
  }
}

void dijkstra_lista(list<Aresta>grafo[], int vertices, int start, int end) {
  bool visitado[vertices];
  int pai[vertices], distancia[vertices], atual;

  list <int> pilha_aux;
  list <int> :: iterator q; // irá guardar o menor caminho para ser mostrada dps 
  
  for(int i=0; i<vertices; i++){
    visitado[i] = false; // ngm foi visitado ainda 
    pai[i] = -1; // não há um pai ainda (saiu pra comprar cigarro e não voltou ainda)
    distancia[i] = INF;
  }
  
  distancia[start] = 0; //0 = posição
  atual = start; // começa do começo
  
  while(!visitado[atual]){
    visitado[atual] = true; // primeiro visitado e assim por diante 
    list<Aresta>::iterator it;
    
    for(it = grafo[atual].begin(); it != grafo[atual].end(); it++){
      int d = it->destino, p = it->peso; // aponta para os valores de cada aresta 
      
      if(!visitado[d] && distancia[atual] + p < distancia[d]) { 
          // se não foi visitado e se a distância que temos mais a atual for menor que a próxima
        distancia[d] = distancia[atual] + p; // essa soma se torna o melhor caminho ebaaa
        pai[d] = atual; 
        // marcamos o vértice de saída deste caminho menor como pai do vétice de chegada 
      }
    }

    int menor_peso = INF; // inicialmente todo menor caminho(peso) será infinito
    
    for(int i=0; i<vertices; i++) {
      if(!visitado[i] && distancia[i] < menor_peso) {
          /* se não foi visitado ainda e a distância do menor caminho que encontramos 
          for menor que o menor peso(o que de primeira sempre vai ser) */
        menor_peso = distancia[i];
        atual = i;
      }
    }
  }

  atual = end; // chegamos no final da jornada 
  while(atual != start) {
    pilha_aux.push_front(atual); // guardamos o melhor caminho para mostrar depois
    atual = pai[atual]; // o pai voltou do cigarro aeeeeee
  }

  cout << "Menor caminho: " << start << " ";
  for(q = pilha_aux.begin(); q != pilha_aux.end(); q++) {
    cout << *q << " "; // enquanto temos valores na pilha_aux(vértices que fazem parte do trajeto)
  }

  cout << endl <<"Custo: "<< distancia[end];
}

int main() {
  int vertices, origem, destino, peso, start, end, orientado;

  cin >> vertices >> orientado >> start >> end;

  list<Aresta>grafo[vertices];

  cin >> origem >> destino >> peso;
  while(origem != -1 || destino != -1 || peso != -1) { 
    cria_aresta(grafo, origem, destino, peso, orientado);
    cin >> origem >> destino >> peso;
  }

  dijkstra_lista(grafo, vertices, start, end);

  return 0;// cabo
}
