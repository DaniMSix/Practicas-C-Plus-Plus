/*
Programa que calcula el factorial de un número introducido por teclado
*/

#include <iostream>
using namespace std;

int main(){

    int num, resultado = 1;
    //Pedimos el número
    cout<<"Inserte un número"<<endl;
    cin>>num;

    // Esta variable es para que vaya multiplicando por los números anteriores
    int factorial = num;

    while (factorial>1){
        
        resultado = resultado * factorial;
        factorial--;
        
    }

    cout<<"El factorial es: "<<resultado;
    
}