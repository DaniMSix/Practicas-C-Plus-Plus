/* 
Programa que convierte un dígito del 1 al 5 en palabras
*/

#include <iostream>
using namespace std;

string convertirDigito(int num){

    string palabra;

    switch (num){
        case 1:
                palabra = "Uno";
                break;
        case 2: 
                palabra = "Dos";
                break;
        case 3:
                palabra = "Tres";
                break;
        case 4:
                palabra = "Cuatro";
                break;
        case 5:
                palabra = "Cinco";
                break;
        default:
                palabra = "El número es inválido";
    }
    return palabra;
}


int main(){
    
    int num;
    string texto;
    //Pedimos el número
    cout<<"Digite un número del 1 al 5"<<endl;
    cin>>num;

    cout <<"El número que usted digito es: "<<num<<endl;

     texto = convertirDigito(num);

    cout<<texto;
    
}