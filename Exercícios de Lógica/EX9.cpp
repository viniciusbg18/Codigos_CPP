#include <iostream>
using namespace std;
int main(){
	int C, F;
	cout<<"Digite a temperatura em graus Farenheit: "<<endl;
	cin>>F;
	C = (5*(F - 32)/9);
	cout<<"Temperatura em graus Celsius: "<<C;
	
	return 0;
}
