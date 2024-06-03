#include <iostream>
#include <string.h>
using namespace std;

int main() {
  char usuario[20];
  char contrasena[20];
  int intentos = 0;

  do {
    cout<<"dime tu usuario ";
    cin>>usuario;

    cout<<"dime tu contraseña ";
    cin>>contrasena;

    if (strcmp(usuario, "root") == 0 && strcmp(contrasena, "1234") == 0) {
      cout<<"Bienvenido al sistema";
      break;
    } else {
      intentos++;
      cout<<"Datos incorrectos intentos restantes"<<3 - intentos<<endl;
    }
  } while (intentos < 3);

  if (intentos == 3) {
    cout<<"Lo sentimos ha superado el número máximo de intentos permitidos";
  }
  return 0;
}
