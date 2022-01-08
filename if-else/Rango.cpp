#include <iostream>
using namespace std;

int main() {
  int nota = 95;

  cout << "Nota : ";
  switch (nota) {
  	// Indica el rango 86,87,88,89,90,91,92,93,94,95,96,97,98,99,100
    case 86 ... 100:
    	cout << "A";
    	break;
    case 76 ... 85:
    	cout << "B";
    	break;
    case 60 ... 75:
    	cout << "C";
		break;
	case 0 ... 59:
    	cout << "D";
  }
}
