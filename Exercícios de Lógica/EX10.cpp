#include <iostream>
using namespace std;
int main(){
	int C, F;
	cout<<"Digite a temperatura em graus Celsius: "<<endl;
	cin>>C;
	F = (9 * (C / 5)) + 32;
	cout<<"Temperatura em graus Farenheit: "<<F;
	
	return 0;
}
