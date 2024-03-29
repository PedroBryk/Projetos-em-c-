#include<iostream>
using namespace std;

int main(){

    int dia_semana;

    cout<<"Que dia da semana eh hoje? ";
    cin>>dia_semana;

    if(dia_semana >=1 && dia_semana <=7){

        if(dia_semana == 1){

            cout<<"Ah! droga eh segunda-feira";
        }else if(dia_semana == 2){
            cout<<"Terça-feira ainda!";
        }else if(dia_semana == 3){
            cout<<"Ja eh quarta-feira, essa semana esta voando!";
        }else if(dia_semana == 4){
            cout<<"Quinta-feira! ja pode comecar a comemorar!";
        }else if(dia_semana == 5){
            cout<<"Sextou! ate que enfim!";
        }else if(dia_semana == 6){
            cout<<"Sabado! dia de descansar!";
        }else if(dia_semana == 7){
            cout<<"Domingo, amanha comeca tudo denovo :/";
        }

    }else{
        cout<<"Ta doido que semana eh essa com "<<dia_semana<<" dias!";
    }

    return 0;
}