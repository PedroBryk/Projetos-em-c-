#include<iostream>
using namespace std;

int main(){

    int valor;

    cout<<"Digite um valor para ser verificado: ";
    cin>>valor;

    if(valor % 2 == 0){

        cout<<"o valor eh par";

    }else{

        cout<<"o valor eh impar";

    }

    return 0;

}