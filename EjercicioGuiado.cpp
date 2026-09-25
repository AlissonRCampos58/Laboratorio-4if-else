#include <iostream>
using namespace std;

int main(){
    float nota;
    cout<<"-----Estado Academico-----"<<endl;
    cout<<"Ingresar nota: ";
    cin>>nota;

    if (nota >= 90 && nota <=100){
        cout<<"Excelente, ¡aprobado con honores!"<<endl;
    } 
        else if(nota >=60 && nota <= 89){
        cout<<"Buen trabajo, ¡aprobado!"<<endl;
    } 
        else if(nota < 60 && nota > 0){
        cout<<"Lo siento, no has aprobado. Necesitas estudiar mas"<<endl;
    }   
        else{
        cout<<" nota invalida."<<endl;
        }
    return 0;
}