#include<iostream>
using namespace std;

string nome;

int idade;

int dia_trab;

double hora_salario = 100;

int main(){


cout<<"Digite seu nome: "<<endl;
cin>>nome;
cout<<"Digite quantos dias voce trabalhou: ";
cin>>dia_trab;

double salario = dia_trab*hora_salario;

cout<<nome<<"Nesse mes voce trabahou "<<dia_trab<<" dias e ganhou "<<salario;

return 0;

}