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
  float Unidad, cantidad, importeTotal = 0;
  do {
    cout<<"Introduzca el precio unitario del artículo si quiere terminar ingrese 0 ";
    cin>>Unidad;
    if (Unidad <= 0) {
      cout<<"el precio unitario debe ser un número positivo";
      continue;
    }
    cout<<"Introduzca la cantidad vendida ";
    cin>>cantidad;
    if (cantidad <= 0) {
      cout<<"Error la cantidad vendida debe ser un número positivo";
      continue;
    }
    importeTotal +=Unidad * cantidad;
    cout<<"Importe parcial"<<importeTotal<<endl;
  } while (Unidad != 0);
  cout<<"Importe total de la factura"<<importeTotal<<endl;

  return 0;

}
