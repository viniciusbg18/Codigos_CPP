#include<iostream>
#include<iomanip>
using namespace std;

// Funções para Árvore Binária de Busca ---------------------------------------

struct Node 
{
	int info;
	Node * right;           //ponteiro para os filhos
	Node * left;
} ;

float media(Node *& curr, int cont, int soma)
{
    float media;
    return media = (soma)/ cont;
}

void insert(Node *& curr, int info)                                          //é um ponteiro por referência, ou seja, permite alterar o ponteiro original 
                                                                                //que está na função chamadora (como root).
{	
	if(curr == NULL)                                                            //cria um novo nó caso a posição esteja vazia
	{
		curr = new Node;
		curr->info = info;                                                    //inseri os dados da torta
		curr->right = NULL;                                                     //cria seus filhos da esquerda e direita vazios
		curr->left = NULL;
	}else {                                                                     //caso a raiz já esteja ocupada
		if(info >= curr->info)                                          // comparar o pf da nova torta com o pf do nó atual para decidir para que lado seguir
		{
			insert(curr->right, info);                                         //da direita caso o valor seja maior ou igual 
		} else if(info < curr->info){
			insert(curr->left, info);                                          //da esuqerda os menores
		}		
	}	
}



// ----------------------------------------------------------------------------
int main()
{
    int n, i, cont, soma;
    
    soma = 0;
    
    Node * root = NULL;
    
    cin >> n;                // quant de tortas
    
    while(n != -1)
    {
        insert(root, n);
        soma += n;
        i++;
        cont = i;
        cin >> n;
    }
    
    cout << fixed << setprecision(2);
    cout << "Media: " << media(root, cont, soma) << endl ;
    
    return 0;
}
