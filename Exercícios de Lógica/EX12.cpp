#include <iostream>
using namespace std;
int main(){
	float altura;
	cout<<"Digite sua altura em metros: "<<endl;
	cin>>altura;
	int peso_ideal = ((72.7 * altura) - 58);
	cout<<"Seu peso ideal deve ser: "<<peso_ideal<<" kg";
	
	return 0;
}
