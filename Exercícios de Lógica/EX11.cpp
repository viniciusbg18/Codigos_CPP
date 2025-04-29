#include <iostream>
using namespace std;
int main(){
	float a, b, c;
	cout<<"Digite os numeros inteiros: "<<endl;
	cin>>a>>b;
	cout<<"Digite o numero real: "<<endl;
	cin>>c;
	cout<<"O produto entre o dobro do primeiro e a metade do segundo: "<<(2*a)*(b/2)<<endl;
	cout<<"A soma entre o triplo do primeiro e o terceiro: "<<(3*a)+c<<endl;
	cout<<"O terceiro elevado ao cubo: "<<c*c*c;
	
	return 0;
}
