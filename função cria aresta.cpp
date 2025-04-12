void cria_aresta(list<Aresta>grafo[], int u, int v, int p, int orientado)
{
    // u, v e p referen-se a origem, destino e peso respectivamente
    //Força a "volta" do grafo se não for orientado
    
    grafo[u].push_back({u, v, p});
    if (orientado == 0)  // se não for orientado possui uma seta de volta também
    {
        grafo[v].push_back({v, u, p});
    }
}
