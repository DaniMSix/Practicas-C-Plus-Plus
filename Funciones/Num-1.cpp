/* 
Programa que compara dos números y al menor le asigna el valor de -1, en caso de que los dos
valores sean iguales los dos los pone en -1
*/

#include <iostream>
using namespace std;

void compararNumeros(int &num1, int &num2){
    if (num1>num2){
        num2 = -1;
    } else {
        if (num2 > num1){
        num1 = -1;
        }else{
            num1 = -1;
            num2 = -1;
        }
    }
}

int main(){

    // Declaramos los dos números
    int num1, num2;

    cout<<"Ingrese el primer número"<<endl;
    cin>>num1;

    cout<<"Ingrese el segundo número"<<endl;
    cin>>num2;

    compararNumeros(num1, num2);
    cout<<"Número1 = "<<num1<<endl;
    cout<<"Número2 = "<<num2;
}
