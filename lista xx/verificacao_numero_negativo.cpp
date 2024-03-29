#include<iostream>
using namespace std;

int main(){

    int valor;

    cout<<"Digite um valor: ";
    cin>>valor;

    if(valor < 0){

        cout<<"O numero digitado eh um valor negativo!";

    }else if(valor == 0){

        cout<<"O numero digitado eh igual a zero!";

    }else if(valor > 0){

        cout<<"O numero digitado eh um valor positivo!";

    }

    return 0;
}
