#include <iostream>
using namespace std;
int main(){
	float altura, peso_ideal;
	char sexo;
	cout<<"indique o seu sexo (M para masculino e F para feminino): "<<endl;
	cin>>sexo;
	cout<<"Agora indique sua altura em metros: "<<endl;
	cin>>altura;
	if (sexo == 'M' || sexo == 'm'){
		peso_ideal = (72.7 * altura) - 58;
	}
	else if (sexo == 'F' || sexo == 'f'){
		peso_ideal = (62.1 * altura) - 44.7;
	}
	cout<<"Seu peso ideal deve ser: "<<peso_ideal<<" kg";
	
	return 0;
}
