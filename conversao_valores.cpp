#include<iostream>
using namespace std;

int main(){

    
    
    double valor_real;

    cout<<"Insira o valor para ser convertido: ";
    cin>>valor_real;

    const double valor_dolar = valor_real/4.98;

    const double valor_euro = valor_real/5.39;

    cout<<"O valor em dolar eh: "<<valor_dolar<<endl;
    cout<<"O valor em euro eh: "<<valor_euro<<endl;

    return 0;

}