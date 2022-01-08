#include <iostream>
using namespace std;

int main(){
	
	cout<<"--- MODIFICADOR LONG ---" << endl;
	int numInt1 = 2147483649;
	long int numLong = 2147483649;
	// Lo que hace long es aumentar la lonitud de un tipo de datos a 4 bytes mas
	
	// Mostramos las variables con sus nombres
	cout << "Valor int = " <<numInt1 <<endl;
	cout << "Valor con long = " << numLong <<endl;
	
	cout <<""<<endl;
	cout <<""<<endl;
	
	cout << "--- MODIFICADOR SHORT ---"<<endl;
	int numInt2 = 32768;
	short int numShort = 32767;
	
	
	// Mostramos las variables con sus nombres
	cout << "Valor int = " <<numInt2 <<endl;
	cout << "Valor con short = " << numShort <<endl;
	
	// short reserva 2 bytes, valor máximo de short es 32767
	// int reserva 4 bytes en memoria
	
	cout <<""<<endl;
	cout <<""<<endl;
	
	cout << "--- MODIFICADOR UNSIGNED INT---"<<endl;
	// Solo aepta números positivos
	// 0 - 4294967295
	// 4294967291
	int numInt3 = 5;
	unsigned int num_Unsigned = -5;
	
	// Mostramos las variables con sus nombres
	cout << "Valor int = " <<numInt2 <<endl;
	cout << "Valor con unsigned = " << num_Unsigned <<endl;
	
	cout <<""<<endl;
	cout <<""<<endl;
	
	cout << "--- MODIFICADOR UNSIGNED CHAR---"<<endl;
	
	// 0 - 255
	char caracter = 'D';
	unsigned char char_Unsigned = 'E';
	
	// Mostramos las variables con sus nombres
	cout << "Valor int = " << caracter <<endl;
	cout << "Valor con unsigned = " << char_Unsigned <<endl;
	
	// No podemos representar valores con signo
	
	
	cout << "--- MODIFICADOR SIGNED ---"<<endl;
	
	// 0 - 255
	char caracter = 'D';
	unsigned char char_Unsigned = 'E';
	
	// Mostramos las variables con sus nombres
	cout << "Valor int = " << caracter <<endl;
	cout << "Valor con unsigned = " << char_Unsigned <<endl;
	
	// No podemos representar valores son signo
	
	
	
}


