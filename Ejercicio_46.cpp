#include<iostream>
using namespace std;
int main(){
    int mayor=0, menor=1, z=0, i=0;
    int x;
    while (i<10)
    {
        cout << "Ingrese el numero: " << i+1 << endl;
        cin >> x;
        i++;
        if(x>mayor){
            mayor = x;
        }
        else if(x<menor){
            menor = x;
        }
        z+=x;
    }
    cout << "La suma de los numeros es de: " << z << endl;
    cout << "El mayor es: " << mayor << endl;
    cout << "El menor es: " << menor << endl;

    return 0;
}
