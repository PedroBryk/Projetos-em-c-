#include <iostream>
using namespace std;

int main() {

    int nota;
    char letra_grande; // char é para letras (string)

    cout<<"Informe sua nota do exame: (0 - 100)";
    cin>>nota;

    if(nota >= 0 && nota <=100){

        if(nota>90){

            letra_grande = 'A';

        }else if(nota > 80){

            letra_grande = 'B';

        }else if(nota>70){
            
            letra_grande = 'C';

        }else if(nota>60){

            letra_grande = 'D';

        }else {

            letra_grande = 'E';

        }
        
        cout<<"Seu conceito e "<<letra_grande<<endl;

        if(letra_grande == 'E'){

            cout<<"Voce nao foi aprovado!";

        }else{

            cout<<"Voce foi aprovado!";

        }

    }else{

        cout<<"Desculpe! "<<nota<<" não esta na faixa"<<endl;

    }

    return 0;

}