#include<iostream>
using namespace std;

int main(){

    const int ano_atual = 2024;
    int ano_nascimento;

    cout<<"Em que ano voce nasceu? ";
    cin>>ano_nascimento;

    int idade = ano_atual-ano_nascimento;

    cout<<"Sua idade eh: "<<idade<<" anos";
}