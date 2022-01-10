/* Programa que calcula la potencia de un número*/

#include <iostream>
using namespace std;

int base, exponente, resultado=1, aux;

int main(){
    cout<<"Ingrese la base"<<endl;
    cin>> base;

    cout <<"Ingrese el exponente"<<endl;
    cin>>exponente;

    aux = exponente;

    while(exponente>0){
        resultado = resultado*base;
        exponente--;
    }

    cout<<"Elevar "<<base<<" a la potencia "<<aux<<" es igual a "<<resultado;

}