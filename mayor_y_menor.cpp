#include <iostream> 
int main() {
  int numero, mayor, menor, suma;

  std::cout << "Ingrese el primer número: ";
  std::cin >> numero;

  mayor = numero;
  menor = numero;

  for (int i = 2; i <= 10; ++i) {
    std::cout << "Ingrese el número " << i << ": ";
    std::cin >> numero;

  
    mayor = std::max(mayor, numero);


    menor = std::min(menor, numero);

    suma += numero;
  }

  std::cout << "El número mayor es: " << mayor << std::endl;
  std::cout << "El número menor es: " << menor << std::endl;
  std::cout << "La suma de los números es: " << suma << std::endl;

  return 0;
}
