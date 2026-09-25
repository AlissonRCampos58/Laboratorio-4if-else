#include <iostream>
using namespace std;


int main(){
    int numero;
    cout<<"-----Verificacion de Numero-----"<<endl;
    cout<<"Ingresa un numero: ";
    cin>>numero;

    if (numero>0){
        cout<<"El numero "<<numero<<" es positivo."<<endl;
    } else if( numero < 0){
        cout<<"El numero "<<numero<<" es negativo."<<endl;
    } else{
        cout<<"El numero es "<<numero<<"."<<endl;
    }
    return 0;
}