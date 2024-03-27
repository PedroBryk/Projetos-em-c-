#include<iostream>
using namespace std;

int main(){

    const int temp = 15;
    const int vento = 40;
    int temp_informada;
    int vent_informado;
    cout<<boolalpha;

    cout<<"Qual a temperatura no momento? ";
    cin>>temp_informada;
    cout<<"Qual a velocidade do vento? ";
    cin>>vent_informado;

    bool vestir_casaco = false;

    vestir_casaco = (vent_informado > vento)&&(temp_informada < temp);

    cout<<"Eh necessario vestir o casaco? "<<vestir_casaco;

    return 0;
    
}