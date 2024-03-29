#include<iostream>
using namespace std;

int main(){

    int valor_1;
    int valor_2;

    cout<<"Digite o valor 1: ";
    cin>>valor_1;

    cout<<"Digite o valor 2: ";
    cin>>valor_2;

    if(valor_1 > valor_2){

        int valor_soma = valor_1+valor_2;

        cout<<"A soma dos valores eh: "<<valor_soma;
    }else{

        int valor_multiplica = valor_1*valor_2;

        cout<<"A multiplicacao dos valores eh: "<<valor_multiplica;
    }

    return 0;

}