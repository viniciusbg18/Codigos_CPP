#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	float salario, horas;
	cout<<"Quanto voce ganha por hora? "<<endl;
	cin>>salario;
	cout<<"Quantas horas voce trabalha por mes? "<<endl;
	cin>>horas;
	cout<<fixed<<setprecision(2)<<endl;
	cout<<"Total ganho no mes: R$ "<<salario*horas<<endl;
	
	return 0;
}
