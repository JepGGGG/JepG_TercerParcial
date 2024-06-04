#include <iostream>

int main() {
  int numeroDeEntrada, numeroMayor, numeroMenor, suma;

  std::cout << "Ingrese el primer número: ";
  std::cin >> numeroDeEntrada;

  numeroMayor = numeroDeEntrada;
  numeroMenor = numeroDeEntrada;
  suma = numeroDeEntrada;

  for (int i = 2; i <= 10; ++i) {
    std::cout << "Ingrese el número " << i << ": ";
    if (std::cin >> numeroDeEntrada) {
      numeroMayor = std::max(numeroMayor, numeroDeEntrada);
      numeroMenor = std::min(numeroMenor, numeroDeEntrada);
      suma += numeroDeEntrada;
    } else {
      std::cerr << "Error al ingresar el número. Intente nuevamente." << std::endl;
      std::cin.clear(); 
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
      i--; 
    }
  }

  std::cout << "El número mayor es: " << numeroMayor << std::endl;
  std::cout << "El número menor es: " << numeroMenor << std::endl;
  std::cout << "La suma de los números es: " << suma << std::endl;

  return 0;
}
