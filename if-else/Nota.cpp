/*
Programa que muestra la puntuación de un alumno de acuerdo a su nota

Media   Nota
90-100   A
80-89    B
70-79    C
60-69    D
0-59     E
*/

#include <iostream>
using namespace std;

int main(){

    int nota;

    //Entrada del usuario
    cout<<"Ingrese su nota"<<endl;
    cin>>nota;

    if (nota>=90 && nota<=100 )
        cout<<"Su nota es A";
    else
        if (nota>=80 && nota<=89)
            cout<<"Su nota es B";
    else
        if (nota>=70 && nota<=79)
            cout<<"Su nota es C";
    else 
        if (nota>=60 && nota<=69)
            cout<<"Su nota es D";
    else
        if (nota>=0 && nota<=59)
        cout<<"Su nota es E";
    

}