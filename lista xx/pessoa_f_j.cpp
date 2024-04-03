#include<iostream>
using namespace std;

int main(){

    char pessoa;
    const char pessoa_f = 'f'; 
    const char pessoa_j = 'j'; 

    cout<<"Digite f para pessoa fisica ou j para pessoa juridica: ";
    cin>>pessoa;

    if(pessoa == pessoa_f){

        cout<<"Voce eh uma pessoa fisica";

    }else if(pessoa == pessoa_j){

        cout<<"Voce eh uma pessoa juridica";

    }

    return 0;

}