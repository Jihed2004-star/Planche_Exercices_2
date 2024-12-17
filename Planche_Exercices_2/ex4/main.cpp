#include <iostream>

using namespace std;
double add(double a,double b){
    return a+b;

}
double sous(double a,double b){
    return a-b;

}
double mul(double a,double b){
    return a*b;

}
double div(double a,double b){
    return a/b;

}
void choice(){
    int choix;
    cout << "Choisissez :" << endl;
    cout << "1.Add" << endl;
    cout << "2.Mul" << endl;
    cout << "3.Sous" << endl;
    cout << "4.Div" << endl;
    cout << "5.Quitter" << endl;
    cin>>choix;
    switch(choix){
    double a,b;
    case 1:
        cout << "Donner les valeurs a et b" << endl;
        cin>>a>>b;
        cout<<"la resultat = "<<add(a,b)<<"\n"<<endl;
        choice();
        break;
    case 2:
        cout << "Donner les valeurs a et b" << endl;
        cin>>a>>b;
        cout<<"la resultat = "<<mul(a,b)<<"\n"<<endl;
        choice();
        break;
    case 3:
        cout << "Donner les valeurs a et b" << endl;
        cin>>a>>b;
        cout<<"la resultat = "<<sous(a,b)<<"\n"<<endl;
        choice();
        break;
    case 4:
        cout << "Donner les valeurs a et b" << endl;
        cin>>a>>b;
        cout<<"la resultat = "<<div(a,b)<<"\n"<<endl;
        choice();
        break;
    case 5:

        cout<<"le programme est terminee "<<endl;
        break;
    default:
        cout<<"Impossible";
    }
}
int main()
{
    int choix;
    cout << "Choisissez :" << endl;
    cout << "1.Add" << endl;
    cout << "2.Mul" << endl;
    cout << "3.Sous" << endl;
    cout << "4.Div" << endl;
    cout << "5.Quitter" << endl;
    cin>>choix;
    switch(choix){
    double a,b;
    case 1:
        cout << "Donner les valeurs a et b" << endl;
        cin>>a>>b;
        cout<<"la resultat = "<<add(a,b)<<"\n"<<endl;
        choice();
        break;
    case 2:
        cout << "Donner les valeurs a et b" << endl;
        cin>>a>>b;
        cout<<"la resultat = "<<mul(a,b)<<"\n"<<endl;
        choice();
        break;
    case 3:
        cout << "Donner les valeurs a et b" << endl;
        cin>>a>>b;
        cout<<"la resultat = "<<sous(a,b)<<"\n"<<endl;
        choice();
        break;
    case 4:
        cout << "Donner les valeurs a et b" << endl;
        cin>>a>>b;
        cout<<"la resultat = "<<div(a,b)<<"\n"<<endl;
        choice();
        break;
    case 5:
        cout<<"le programme est terminee "<<endl;
        break;
    default:
        cout<<"Impossible";
    }
    return 0;
}
