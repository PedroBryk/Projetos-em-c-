#include<iostream>
using namespace std;

int main(){

    int valor;

    cout<<"Digite o valor: ";
    cin>>valor;

    if(valor < 100){

        int valor_inflacionado = valor*0.10;
        int valor_total = valor+valor_inflacionado;

        cout<<"O valor inflacionado eh: "<<valor_total;
    }else if (valor >= 100)
    {
        int valor_inflacionado = valor*0.20;
        int valor_total = valor+valor_inflacionado;

        cout<<"O valor inflacionado eh: "<<valor_total;
    }
    
    
}