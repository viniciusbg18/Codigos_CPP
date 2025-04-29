#include <iostream>
using namespace std;
int main(){
	int soma = 0, nota, media;
	cout<<"Notas: "<<endl;
	for(int i = 0; i < 4; i++){
		cin>>nota;
		soma += nota;
	}
	media = soma / 4;
	cout<<"Media = "<<media<<endl;
	return 0;
}
