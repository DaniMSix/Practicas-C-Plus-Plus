#include <iostream>
using namespace std;

double suma(double num1, double num2){
    return num1 + num2;
}

double resta(double num1, double num2){
    return num1-num2;
}

double multiplicacion(double num1, double num2){
    return num1*num2;
}

double division(double num1, double num2){
    return num1/num2;
}

int main(){

    double num1, num2, res;
    char operador;

    // Pedimos los números y el operador
    cout <<"Ingrese el primer número"<<endl;
    cin>>num1;
    cout <<"Ingrese el segundo número"<<endl;
    cin>>num2;
    cout <<"Ingrese el símbolo de la operación que desea realizar\n";
    cout <<"Puede ser + - * / "<<endl;
    cin>>operador;

    switch (operador){
        case '+':
                res = suma(num1, num2);
                break;
        case '-':
                res = resta(num1, num2);
                break;
        case '*':
                res = multiplicacion(num1, num2);
                break;
        case '/':
                res = division(num1, num2);
                break;
        default: 
                cout<<"Operación no válida";    
    }

    cout <<num1<<" "<<operador<<" "<<num2<<" = "<<res;
}