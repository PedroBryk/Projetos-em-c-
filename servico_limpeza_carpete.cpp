#include<iostream>
using namespace std;

const double valor = 150;
const double imposto = 0.06;
const int tempo = 30;
int quartos;
int main(){

    cout<<"Bem vindo ao servico de limpeza do Frank"<<endl;
    cout<<"Quantos quartos voce gostaria de limpar? ";
    cin>>quartos;

    double valor_limpeza = (quartos*valor);
    double valor_imposto_pago = (valor_limpeza*imposto);
    double valor_total = (valor_limpeza+valor_imposto_pago);

    cout<<"Orcamento para servico de limpeza de carpetes:"<<endl;
    cout<<"Numero de quartos: "<<quartos<<endl;
    cout<<"Preco por quarto: "<<valor<<endl;
    cout<<"Custo: "<<valor_limpeza<<endl;
    cout<<"Imposto: "<<valor_imposto_pago<<endl;
    cout<<"==========================================="<<endl;
    cout<<"Orcamento total: R$ "<<valor_total<<endl;
    cout<<"Orcamento valido por "<<tempo<<" dias"<<endl;

    return 0;
}