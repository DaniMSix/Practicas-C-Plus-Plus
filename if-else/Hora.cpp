/*
Programa que lee la hora en notación de 24 horas y da como salida la notación en 12 horas. Exactamente se deben introducir 5 caracteres.
Por ejemplo: 08:00
*/


#include <iostream>
using namespace std;
 
int main(){
    int hora, minutos;
    
    cout<<"Introduzca la hora"<<endl;
    scanf("%d : %d",&hora,&minutos);
    
    if (hora>12)
    	cout<<hora-12<<":"<<minutos;
	else
		cout<<hora<<":"<<minutos;
    
    
}
