#include <iostream>
#include <random>

using namespace std;
int u(int x){
    int u0=3;
    for (int i=0;i<x;i=i+1){
        u0=3*u0+4;
    }
    return u0;
}
int main()
{
    int n;
    cout << "Donner n :" << endl;
    cin>>n;
    cout << "u(" <<n<<")="<<u(n)<<endl;
    return 0;
}
