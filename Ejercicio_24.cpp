#include<iostream>
using namespace std;

int main(){

int numero,potencia,exponente;

cout<<"dime el numero que quieres elevar";
cin>>numero;
cout<<"dime el exponente";
cin>>exponente;
potencia=1;

for(int i=0;i< exponente;i++){;

potencia*=numero;
}
 
cout<<numero<< "elevado a la potencia" <<exponente<< "es" <<potencia<<endl;

return 0;
}
