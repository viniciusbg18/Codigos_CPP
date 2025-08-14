#include<iostream>
using namespace std;
bool buscaSequencial(int vetor[], int tamanho, int valor)
{
	int i = 0;
	bool achou = false;
	while (i < tamanho && achou == false)
	{
		if (vetor[i] == valor)
		{
			achou = true;
		}
		i = i + 1;
	}
	return achou;
}
