#include <iostream>

using namespace std;
/*passage valeur*/
bool egalepv(int a,int b){
    return (a==b)?true:false;
}
/*passage referance*/
bool egalepr(int& a,int& b){
    return (a==b)?true:false;
}
/*passage adress*/
bool egalepa(int* a,int* b){
    return (*a==*b)?true:false;
}


int main()
{
    int a=5;
    int b=8;
    cout <<" passage ref " <<egalepr(a,b) << endl;
    cout <<" passage adress "<< egalepa(&a,&b) << endl;
    cout <<" passage valeur "<< egalepv(a,b) << endl;
    return 0;
}
