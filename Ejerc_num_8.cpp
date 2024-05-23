#include<iostream>
#define pi 3.141592
using namespace std;
int main(){
    float radio, perimetro;
    cout<<"Introduzca el radio: ";
    cin>>radio;
    perimetro = 2*pi*radio;
    cout<<perimetro;

    return 0;
}
