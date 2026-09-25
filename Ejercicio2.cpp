#include <iostream>
using namespace std;

int main(){
    int edad;
    cout<<"-----Categoria de edad-----"<<endl;
    cout<<"Ingresar su edad: ";
    cin>>edad;

    if (edad >= 0 && edad <=12){
        cout<<"Infante."<<endl;
    } 
        else if(edad >=13 && edad <= 17){
        cout<<"Adolecente."<<endl;
    } 
        else if(edad >=18 && edad <=64){
        cout<<"Adulto."<<endl;
    }   
        else if(edad >=65){
        cout<<"Adulto mayor."<<endl;
    }
        else{
        cout<<" Edad invalida."<<endl;
        }
    return 0;
}