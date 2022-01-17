/*
Programa que calcula el factorial de un número introducido por teclado
*/

#include <iostream>
using namespace std;

int main(){

    int num;
    //Pedimos el número
    cout<<"Inserte un número"<<endl;
    cin>>num;

    // Esta variable es para que cuando sea igual al número introducido se salga del ciclo
    int aux = 1;
    
    

    while (num>0){
        
        aux = num * aux;
        num--;
        
    }

    cout<<"El factorial es: "<<aux;
    
}