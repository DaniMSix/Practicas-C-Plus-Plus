#include <iostream>
using namespace std;


int main(){
    int num, res, temp;
    
    cout<<"Ingrese el número"<<endl;
    cin>>num;

    // Esta variable nos va a servir para después comparar el número
    int aux = num;

    while(num > 0){
        res = num % 10;
        temp = temp * 10 + res;
        num = num/10;
    }

    // Comparamos si después de invertir el número es igual al del inicio
    if (aux == temp)
        cout<<"El número es palíndromo";
    else
        cout << "El número no es palíndromo";
}