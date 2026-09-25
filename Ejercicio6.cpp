#include <iostream>
using namespace std;

int main(){
    int horas;
    cout<<"-----Tarifa de Estacionamiento-----"<<endl;
    cout<<"Ingresar horas estacionadas: ";
    cin>>horas;

    if (horas == 1){
        cout<<"Total a pagar: $2.00"<<endl;
    } 
        else if(horas >=2 && horas <= 5){
        cout<<"Total a pagar: $5.00"<<endl;
    }   
        else if(horas >5){
        cout<<"Total a pagar: $10.00"<<endl;
    }
        else{
        cout<<"Invalida."<<endl;
        }
    return 0;
}