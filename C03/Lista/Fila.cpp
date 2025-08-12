#include <iostream>
#include <list>
using namespace std;
int main() {
    list <int> lista;
    list <int> ::iterator p;
    int i, x;

    for(i=0; i<4; i++){
        cin>>x;
        lista.push_back(x);
    }
    
    
    while(!lista.empty()){
        cout << *lista.begin() <<" ";
        lista.pop_front();
    }
    return 0;
}
