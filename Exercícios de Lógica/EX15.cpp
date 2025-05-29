#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double bruto, ir, inss, s, l;
	cin>>bruto;
	ir = 0.11*bruto;
	inss = 0.08*bruto;
	s = 0.05*bruto;
	l = bruto - (ir+inss+s);
	cout<<"Imposto de renda: R$"<<ir<<endl;
	cout<<"INSS: R$"<<inss<<endl;
	cout<<"Sindicato: R$"<<s<<endl;
	cout<<"Salario Liquido: R$"<<l<<endl;
	
	return 0;
}
