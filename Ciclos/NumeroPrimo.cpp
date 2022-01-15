#include <iostream>

using namespace std;

int main() {
  // Inicializamos las variables
  int number = 7;
  bool isPrime = true;
  
  //Los números menores que 2 no son primos
  if (number <= 1) {
  //Sets the value of `isPrime` to false
    isPrime = false;
  }
 

  for (int cont = 2; cont <= number / 2; cont++) {
    if (number % cont == 0) {
      isPrime = false;
      // se va a la línea No. 27
      break;
    }
  }

  if (isPrime) {
    cout << "Number is prime";
  } else {
    cout << "Number is not prime";
  }

  return 0;
}