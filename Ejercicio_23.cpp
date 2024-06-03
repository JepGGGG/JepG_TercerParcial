#include<iostream>
using namespace std;
#include<math.h>

int main(){

int numero;
int potencia;

cout<<"dime el numero que quieres elevar";
cin>>numero;

cout<<"dime la potencia";
cin>>potencia;

float resultado=pow(numero,potencia);

cout<<numero<< " elevado a la potencia de" <<potencia<< "es" <<resultado<<endl;
return 0;
}
