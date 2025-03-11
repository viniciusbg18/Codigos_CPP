#include <iostream>
using namespace std;
 // Problema da mochila
 // PD aloca em uma memoria, so consegue fazer quando à uma relação de informações 

struct Item{
	int peso, valor;
}

int sol (Item itens [], int i, int n, int cap)
{
	if(i>=n)
		return 0;
	if (memoria [i][cap] != -1)
		return memoria[i][cap];
	int s1 = sol(itens, i+1, n, cap);
	int s2 = 0;
	if(cap>=itens[i].peso)
		s2 = itens[i].valor + sol(itens, i+1, n, cap - itens[i].peso);
	memoria[i][cap] = max(s1, s2)
	return memoria[i][cap];
}
int main()
{
	int n = 4;
	Item itens = [{7, 42}, {3, 12}, {4, 40}, {5, 25}];
	
	cout<<sol(itens, 0, n, cap)
	return 0;
}
