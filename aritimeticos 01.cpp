#include<iostream>
using namespace std;

int main(){

    const int maior = 20;
    int num1;
    cout<<boolalpha;
    cout<<"Digite um valor maior que "<<maior;
    cin>>num1;
    cout<<num1<<" > "<<maior<<" : "<<(num1>maior);

    return 0;

}