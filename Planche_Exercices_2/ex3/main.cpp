#include <iostream>

using namespace std;

int incrementer(int n){
    n=n+1;
    return n;


}
void permuterad(int* a,int* b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
void permuterrf(int&a,int& b){
    int c;
    c=a;
    a=b;
    b=c;
}
int main()
{
    int a=7;
    int b=9;
    cout << "Avant le changement : "<<"a="<<a<<" b="<<b<< endl;
    permuterad(&a,&b);
    cout << "Apres le changement par adress : "<<"a="<<a<<" b="<<b<< endl;
    permuterrf(a,b);
    cout << "Apres le changement par ref : "<<"a="<<a<<" b="<<b<< endl;
    cout<<incrementer(a);
    return 0;
}
