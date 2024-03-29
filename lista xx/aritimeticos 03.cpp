#include<iostream>
using namespace std;

 int main(){

    int valor;

    cout<<"Digite um valor: ";
    cin>>valor;
    cout<<boolalpha;

    bool fora_limites = false;
    fora_limites = (valor >= 5)&&(valor <=50);
    cout<<valor<<" esta entre 5 e 50? "<<fora_limites;

   return 0;
 }