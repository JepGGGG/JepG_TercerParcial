#include <iostream>
using namespace std;

int main() {
  int numero, menor, mayor;
  int i;
  int suma=0;
  menor=0;
  mayor=0;

cout<<"dime 10 numeros";
cin>>numero;
menor=numero;
mayor=numero;
suma+=numero;

for(int i=1;i<10;i++){
cin>>numero;
suma+=numero;

if(numero<menor){;
menor=numero;
}
if(numero>mayor){
mayor=numero;
}
}
cout<<"el numero mayor es"<<mayor<<endl;
cout<<"el numero menor es"<<menor<<endl;
cout<<"la suma de los numeros es"<<suma<<endl;

return 0;
}
