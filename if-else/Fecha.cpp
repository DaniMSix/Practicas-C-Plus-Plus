/*
Programa que lee las fechas escritas de modo usual por ejemplo: 23 febrero 2022 y las muestra como tres números
por ejemplo: 23/2/2022
*/

#include <iostream>
using namespace std;

int main(){

    int dia, anio;
    string mes;
    
    cout<<"Introduzca la fecha"<<endl;
    scanf("%d %s %d",&dia,&mes, &anio);

    if (mes == "enero"){
        cout<<dia<<"/"<<1<<"/"<<anio;
    }else if (mes =="febrero"){
        cout<<dia<<"/"<<2<<"/"<<anio;
    }else if ( mes == "marzo"){
        cout<<dia<<"/"<<3<<"/"<<anio;
    }else if (mes == "abril"){
        cout<<dia<<"/"<<4<<"/"<<anio;
    }else if (mes == "mayo"){
        cout<<dia<<"/"<<5<<"/"<<anio;
    }else if (mes == "junio"){
        cout<<dia<<"/"<<6<<"/"<<anio;
    }else if (mes == "julio"){
        cout<<dia<<"/"<<7<<"/"<<anio;
    }else if (mes =="agosto"){
        cout<<dia<<"/"<<8<<"/"<<anio;
    }else if (mes == "septiembre"){
        cout<<dia<<"/"<<9<<"/"<<anio;
    }else if (mes == "octubre"){
        cout<<dia<<"/"<<10<<"/"<<anio;
    }else if (mes == "noviembre"){
        cout<<dia<<"/"<<11<<"/"<<anio;
    }else{
        cout<<dia<<"/"<<12<<"/"<<anio;
	}
}
