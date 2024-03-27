#include<iostream>
using namespace std;

int main(){

    const int maior = 20;
    const int menor = 10;
    int num1;
    cout<<boolalpha;
    cout<<" Digite um valor maior que "<<menor<<" e "<<" menor que "<<maior;
    cin>>num1;
    bool fora_limites = false;
    fora_limites = (num1 < menor) && (num1 > maior);
    cout<< num1 <<" Está entre "<< menor <<" e "<<maior<<" : "<<fora_limites;

    return 0;

}