#include<iostream>
using namespace std;

int main(){

    int tabuada;

    cout<<"Digite qual tabuada voce deseja imprimir: ";
    cin>>tabuada;

    if(tabuada == 1){

        cout<<"1X1=1"<<endl<<"1X2=2"<<endl<<"1X3=3"<<endl<<"1X4=4"<<endl<<"1X5=5"<<endl<<"1X6=6"<<endl<<"1X7=7"<<endl<<"1X8=8"<<endl<<"1X9=9";
    }else if(tabuada ==2){
        cout<<"2X1=2"<<endl<<"2X2=4"<<endl<<"2X3=6"<<endl<<"2X4=8"<<endl<<"2X5=10"<<endl<<"2X6=12"<<endl<<"2X7=14"<<endl<<"2X8=16"<<endl<<"2X9=18";
    }else if(tabuada ==3){
        cout<<"3X1=3"<<endl<<"3X2=6"<<endl<<"3X3=9"<<endl<<"3X4=12"<<endl<<"3X5=15"<<endl<<"3X6=18"<<endl<<"3X7=21"<<endl<<"3X8=24"<<endl<<"3X9=27";
    }else if(tabuada ==4){
        cout<<"4X1=4"<<endl<<"4X2=8"<<endl<<"4X3=12"<<endl<<"4X4=16"<<endl<<"4X5=20"<<endl<<"4X6=24"<<endl<<"4X7=28"<<endl<<"4X8=32"<<endl<<"4X9=36";
    }else if(tabuada ==5){
        cout<<"5X1=5"<<endl<<"5X2=10"<<endl<<"5X3=15"<<endl<<"5X4=20"<<endl<<"5X5=25"<<endl<<"5X6=30"<<endl<<"5X7=35"<<endl<<"5X8=40"<<endl<<"5X9=45";
    }else if(tabuada ==6){
        cout<<"6X1=6"<<endl<<"6X2=12"<<endl<<"6X3=18"<<endl<<"6X4=24"<<endl<<"6X5=30"<<endl<<"6X6=36"<<endl<<"6X7=42"<<endl<<"6X8=48"<<endl<<"6X9=54";
    }else if(tabuada ==7){
        cout<<"7X1=7"<<endl<<"7X2=14"<<endl<<"7X3=21"<<endl<<"7X4=28"<<endl<<"7X5=35"<<endl<<"7X6=42"<<endl<<"7X7=49"<<endl<<"7X8=56"<<endl<<"6X9=63";
    }else if(tabuada ==8){
        cout<<"8X1=8"<<endl<<"8X2=16"<<endl<<"8X3=18"<<endl<<"8X4=32"<<endl<<"8X5=40"<<endl<<"8X6=48"<<endl<<"8X7=56"<<endl<<"8X8=64"<<endl<<"8X9=72";
    }else if(tabuada ==9){
        cout<<"9X1=9"<<endl<<"9X2=18"<<endl<<"9X3=27"<<endl<<"9X4=36"<<endl<<"9X5=45"<<endl<<"9X6=54"<<endl<<"9X7=63"<<endl<<"9X8=72"<<endl<<"9X9=81";
    }

    return 0;
}