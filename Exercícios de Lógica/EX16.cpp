#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double area, l, n, p;
	cin>>area;
	l = area * 3;
	n = l / 18;
	p = n * 80;
	cout<<fixed<<setprecision(0)<<"Numero de latas de tinta: "<<n<<endl;
	cout<<fixed<<setprecision(2)<<"Preco: R$"<<p<<endl;
	
	return 0;
}
