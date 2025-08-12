#include <iostream>
using namespace std;
int main()
{
    int n;
    int *v = nullptr;
    int *p = nullptr;
    
    cin>>n;
    v = new int[n];
    p = v;
    for(int i=0; i<n; i++)
    {
        cin>>*p;
        p++;
    }
    p = v;
    for(int i=0; i<n; i++)
    {
        cout<<*p<<" ";
        p++;
    }
    cout<<endl;
    
    delete[] v;

    
    
    return 0;
}
