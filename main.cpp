#include <iostream>
using namespace std;

int main(){
    //variabili
    float a,b,c;

    //input
    cin >>a>>b>>c;

    //area triangolo
    cout <<0.5*a*b<<endl;

    //area quadrato
    cout <<a*a<<endl;

    //area rettangolo
    cout << a*b<<endl;

    //area trapezio
    cout << 0.5*(a+b)*c<<endl;

    return 0;

}
