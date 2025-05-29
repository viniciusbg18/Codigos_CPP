#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double peso, multa;
	
	cin>>peso;
	if(peso > 50){
		multa = (peso - 50) * 4;
	}
	else{
		cout<<"Não há multa";
		return 0;
	}
	cout<<"Excesso: "<<peso-50<<" Kg"<<endl;
	cout<<fixed<<setprecision(2)<<"Multa: R$"<<multa<<endl;
	
	return 0;
}
