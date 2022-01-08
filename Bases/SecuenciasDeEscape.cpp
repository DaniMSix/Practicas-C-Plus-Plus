#include <iostream>
using namespace std;

int main(){
	
	// \n --> Mueve el cursor al comienzo de la siguiente línea
	// Equivalente a presionar Enter
	cout << "Nueva linea\n";	
	cout << "Hello, world\n";
	
	cout <<"--------------------------------------------------------------------------------\n";
	
	// \t --> Mueve el cursor 8 espacios hacia la derecha
	// Equivale a presionar 'tab” en el teclado(deja 4 u 8 espacios depende del editor de texto
	cout << "Horizontal Tab\n";
	cout << "Hello,\t world\n";
	
	cout <<"--------------------------------------------------------------------------------\n";
	
	// \" --> Inserta comillas dobles en la salida
	cout << "Double quote\n";
	cout << "\"Hello, world\"\n";
	
	cout <<"--------------------------------------------------------------------------------\n";
	
	// \r --> El retorno de carro significa volver al comienzo de la línea actual sin avanzar hacia abajo
	cout << "Retorno de carro\n";
	cout << "Hello, \rh";
	// Cambiamos la h mayúscula por la miniscúla
	
	cout <<"--------------------------------------------------------------------------------\n";
	
	// \\ --> Muestra el carácter de retroceso
	cout << "Backslash\n";
	cout << "Hello, \\world\n";
	
	cout <<"--------------------------------------------------------------------------------\n";
	
	// \' --> Inserta comillas simples en la salida
	cout << "Comillas simples\n";
	cout << "\'Hello, world\'\n";
	
	cout <<"--------------------------------------------------------------------------------\n";
	
	// \b --> Borra el último carácter
	cout << "Retroceso\n";
	cout << "Hello,\bworld";
}


