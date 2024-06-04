#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "Ingrese un numero: " << endl;
    cin >> x;
    switch (x){
    {
    case 1:
        cout << "As" << endl;
        break;
    case 10:
        cout << "Sota" << endl;
        break;
    case 11:
        cout << "Caballo" << endl;
        break;
    case 12:
        cout << "Rey" << endl;
        break;
    default:
    if(x>=2 && x<=9){
        cout << "No es ninguna figura, ni tampoco As." << endl;
    }
    else{
    cout << "No es ningun numero de la baraja española. " << endl;
    }
        break;
    }

    return 0;
    }
}
