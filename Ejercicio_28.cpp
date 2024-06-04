
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout << "Ingrese dos numeros: " << endl; 
    cin >> x;
    cin >> y;
    if(x==y){
        cout << "Los numeros son iguales" << endl;
    }
    else if(x>y){
        cout << "El primer numero es mayor que el segundo" << endl;
    }
    else{
        cout << "El segundo numero es mayor que el primero" << endl;
    }

    return 0;
}
