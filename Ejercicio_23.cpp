#include <iostream>
using namespace std;

int main(){
    int a = 5, b =  7, c = 9, suma = 0;
    cout << "El valor de a, b, c, son: " << a << " " << b << " " << c << endl;
    cout << "Introducir el numero de las variables a,b,c" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    suma = a + b + c;
    cout << "La suma de los numeros a,b,c es: " << suma << endl;

    return 0;
}
