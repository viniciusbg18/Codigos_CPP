#include <iostream>
#include <list>
using namespace std;

bool encontrar(list <int> lista, int x){
    list <int>::iterator p;
    
    for(p = lista.begin(); p != lista.end(); p++){
        if(*p==x){
            return true;
        }
    }
        return false;
}

int main(){
    list <int> lista;
    int x;
    int i;
    int N;
    
    cin>>N;
    while(N != 0){
        cin>>N;
        lista.push_back(N);
    }
    cin>>x;
    if(encontrar(lista, x)){
        cout<<"Encontrado"<<endl;
    }
    else
        cout<<"Nao encontrado"<<endl;
    
    return 0;
    
    
}
