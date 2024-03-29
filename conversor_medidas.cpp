#include<iostream>
using namespace std;

int main(){

    double valor_metros;

    cout<<"Dgite o valor em metros para conversao: ";
    cin>>valor_metros;

    double valor_decimetro = valor_metros*10;
    double valor_centimetro = valor_metros/100;
    double valor_milimetro = valor_metros/1000;

    cout<<"O valor em decimetros eh: "<<valor_decimetro<<endl;
    cout<<"O valor em centimetros eh: "<<valor_centimetro<<endl;
    cout<<"O valor em milimetros eh: "<<valor_milimetro<<endl;

    return 0;
}