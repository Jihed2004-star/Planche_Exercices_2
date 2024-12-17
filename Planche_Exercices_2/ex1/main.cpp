#include <iostream>

using namespace std;

int main()
{

    int* pt=new int(10);
    cout <<"La valeur = "<< *pt <<"\n"<<"L'adress =" <<pt<<endl;
    double* at=new double(10.5);
    cout <<"La valeur = "<< *at <<"\n"<<"L'adress =" <<at<<endl;
    return 0;
}
