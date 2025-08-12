#include <iostream>
#include <list>

using namespace std;

int main()
{
    list <int> lista;
    list <int> ::iterator p;
    int i;
    int x;
    
    for(i = 0; i < 4; i++) {
        cin >> x;
        lista.push_front(x);
    }
    
    for(p = lista.begin(); p != lista.end(); p++)
    {
        cout << *p << " ";
    }
    
    return 0;
}
