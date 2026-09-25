#include <iostream>
using namespace std;

int main(){
    float nota;
    cout<<"-----Sistema de Notas-----"<<endl;
    cout<<"Ingresar nota: ";
    cin>>nota;

    if (nota >= 90 && nota <=100){
        cout<<"A"<<endl;
    } 
        else if(nota >=80 && nota <= 89){
        cout<<"B"<<endl;
    } 
        else if(nota >=70 && nota <=79){
        cout<<"C"<<endl;
    }   
        else if(nota >=60 && nota <=69){
        cout<<"D"<<endl;
    }
        else if(nota < 60){
        cout<<"F"<<endl;
    }   
        else{
        cout<<" nota invalida."<<endl;
        }
    return 0;
}