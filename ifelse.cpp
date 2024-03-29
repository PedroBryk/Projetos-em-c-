#include<iostream>
using namespace std;

int main(){
    
    const int min = 10;
    const int max = 100;
    int num;

    cout<<"Informe um numero entre "<<min<<" e "<<max<<" : ";
    cin>>num;

    if(num >=min){

        cout<<"\n====================== if 1 ===================="<<endl;

        cout<<" e maior ou igual a "<<min;

        int dif = (num - min);

        cout<<"O numero e "<<dif<<" que o numero "<<min;
    }

    if(num <= max){

        cout<<"\n====================== if 2 ===================="<<endl;

        cout<<" e menor ou igual a "<<max;

        int dif2 = (num - min);

        cout<<"O numero e "<<dif2<<" que o numero "<<max;

    }

    if(num <= max && num >= min){

        cout<<"\n====================== if 3 ===================="<<endl;

        cout<<num<<" esta entre o intervalo de "<<min<<" e "<<max;

    }

    if(num == max || num == min){

        cout<<"\n====================== if 3 ===================="<<endl;

        cout<<" esta bem no limite "<<endl;

    }

    return 0;
}