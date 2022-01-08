#include <iostream>
using namespace std;

int main(){
	
	int cantidad_segundos;
	cout << "Ingrese la cantidad de segundos"<<endl;
	cin>>cantidad_segundos;
	//int total_seconds = 3870;
	// Formato 1h : 4m : 30s
	
	int horas, minutos, segundos;
	
	horas = cantidad_segundos / 3600;
	minutos = (cantidad_segundos % 3600)/60;
	segundos = (cantidad_segundos % 3600) % 60;
	
	cout << horas <<'h' <<":"<< minutos << 'm' <<":"<<segundos << 's';
}

