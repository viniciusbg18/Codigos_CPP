#include <iostream>
using namespace std;

/*struct data_type{
	int info;
}; */

struct node {
	int info; // ou data_typeinfo
	node * left; // ponteiros que são da mesma strutura de árvore
	node * right;
};

//typedef node * nodeptr;

void insert(node * &curr, int info){
	if(curr == NULL){
		curr = new node;
		curr->info = info;
		curr->left = NULL;
		curr->right = NULL;
	}
	else{
		if(info < curr->info){
			insert(curr->left, info);
		}
		else{
			insert(curr->right, info)
		}
	}
}

node * search(node * curr, int info){
	if(curr == NULL){
		return NULL;
	}
	else{
		if(curr->info == info){
			return curr;
		}
		else{
			if(info < curr->info){
				return search(curr->left, info);
			}
			else{
				return search(curr->right, info);
			}
		}
	}
}

int main()
{
	node * root = NULL;
	
	insert(root , 10);
	
	insert(root, 12);
	
	insert(root, 6);
	
	insert(root, 33);
	
	node * result = search(root, 11);
	
	if(result == NULL){
		cout << "Elemento nao encontrado" << endl;
	}
	else{
		cout << result->info << endl;
	}
	/*node * resultado = new node; // criando uma memoria alocada dinamicamente => retorna um ponteiro 
	
	(*resultadoinfo = 88;
	(*resultado).left = new node;
	(*resultado).right = new node;
	*/
	return 0;
}
