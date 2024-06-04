#include<iostream>
using namespace std;

int main(){
    int b,h;
    float r = 0;
    cout << "Introduzca la base del triangulio: " << endl;
    cin >> b;
    cout << "Introduzca la altura del triangulo: " << endl; 
    cin >> h;
    r = (b*h)/2;
    cout << "Un triangulo de altura " << h << ", y de base " << b << ", tiene un area de: " << r << endl;

    return 0;
}
