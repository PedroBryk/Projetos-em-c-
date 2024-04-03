#include<iostream>
using namespace std;

int main(){

    const int senha = 34567;
    int senha_digitada;

    cout<<"Digite sua senha: ";
    cin>>senha_digitada;

    if(senha_digitada == senha){

        cout<<"Acesso autorizado!";

    }else{

        cout<<"Acesso negado";
        
    }
}