#include<iostream>
using namespace std;

const double valor_quarto_grande = 200;
const double valor_quarto_pequeno = 150;
const double imposto = 0.06;
const int tempo = 30;
int quarto_grande;
int quarto_pequeno;
int main(){

    cout<<"Bem vindo ao servico de limpeza do Frank"<<endl;
    cout<<"Quantos quartos grandes voce gostaria de limpar? ";
    cin>>quarto_grande;
    cout<<"Quantos quartos pequenos voce gostaria de limpar? ";
    cin>>quarto_pequeno;

    double valor_limpeza_grande = (quarto_grande*valor_quarto_grande);
    double valor_limpeza_pequeno = (quarto_pequeno*valor_quarto_pequeno);
    double valor_limpeza_quartos = (valor_limpeza_grande+valor_limpeza_pequeno);
    double valor_imposto_pago = (valor_limpeza_quartos*imposto);
    double valor_total = (valor_limpeza_quartos+valor_imposto_pago);

    cout<<"Orcamento para servico de limpeza de carpetes:"<<endl;
    cout<<"Numero de quartos grandes: "<<quarto_grande<<endl;
    cout<<"Numero de quartos grandes: "<<quarto_pequeno<<endl;
    cout<<"Preco por quarto grande: "<<valor_quarto_grande<<endl;
    cout<<"Preco por quarto grande: "<<valor_quarto_pequeno<<endl;
    cout<<"Custo: "<<valor_limpeza_quartos<<endl;
    cout<<"Imposto: "<<valor_imposto_pago<<endl;
    cout<<"==========================================="<<endl;
    cout<<"Orcamento total: R$ "<<valor_total<<endl;
    cout<<"Orcamento valido por "<<tempo<<" dias"<<endl;

    return 0;
}