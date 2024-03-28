#include<iostream>
using namespace std;

int main(){

    int idade;

    cout<<"Digite sua idade: ";
    cin>>idade;

    if(idade >= 16){

        cout<<"Voce esta apto a dirigir";

    }else{

        cout<<"Voce nao esta apto para dirigir";
    }

    return 0;
}