#include <iostream>
#include <list>
using namespace std;

int soma(list<int> lista) {
    int total = 0;
    list<int>::iterator p;
    for (p = lista.begin(); p != lista.end(); p++) {
        total += *p;
    }
    return total;
}

int main() {
    list<int> lista;
    int N;

    cin>>N;
    while(N!=0){
        lista.push_back(N);
        cin>>N;
    }
    cout << soma(lista) << endl;

    return 0;
}
