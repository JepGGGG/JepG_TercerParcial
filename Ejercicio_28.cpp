#include <iostream>
#include <string.h>
using namespace std;


int main() {
  char nombre[20];
  char grupoLista[20];
  int intentos = 0;

  do {
    cout<<"dime tu nombre ";
    cin>>nombre;

    cout<<"dime tu grupo grado y numero de lista ";
    cin>>grupoLista;

    if (strcmp(nombre, "JepG") == 0 && strcmp(grupoLista, "2bmpg") == 0) {
      cout<<"Bienvenido al sistema";
      break;
    } else {
      intentos++;
      cout<<"Datos incorrectos intentos restantes"<< 3 - intentos<<endl;
    }
  } while (intentos < 3);
  if (intentos == 3) {
    cout<<"Lo sentimos ha superado el número máximo de intentos permitidos";
  }
  return 0;
}
