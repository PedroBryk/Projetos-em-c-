#include<iostream>
using namespace std;
int main(){

    char letra_grade;

    cout<<"Informe a letra do conceito que voce deseja obter no exame: ";
    cin>>letra_grade;

    switch (letra_grade)
    {
    case 'a':
    case 'A':

    cout<<"Voce quer tirar uma nota acima de 90 :"<<endl;
        
        break;

    case 'b':
    case 'B':

    cout<<"Voce quer tirar uma nota acima de 80 :"<<endl;

        break;
    
    case 'c':
    case 'C':

    cout<<"Voce quer tirar uma nota acima de 70 :"<<endl;

        break;
    
    case 'd':
    case 'D':

    cout<<"Voce esta perto de reprovar:"<<endl;

        break;
    
    case 'e':
    case 'E':

    char confirma;

    cout<<"Voce tem certeza (s) sim ou (n)nao"<<endl;
    cin>>confirma;

    if (confirma == 'S' || confirma == 's')
    {

         cout<<"Infelizmente voce reprovou!"<<endl;

    }else if(confirma == 'N' || confirma == 'n'){

         cout<<"Bora estudar!"<<endl;

    }else{

        cout<<"opcao invalida"<<endl;

    }

        break;

    cout<<"Entrada invalida";

        break;
    }
}