#include<stdio.h>
using namespace std;

int main(){

int numero;
int mayor=1;
int menor;
int suma=0;
int i=0;

while(i<=10){;
cout<<"ingresa el numero";
cin>>numero;

if(numero<menor){;
menor=numero;
}
if(numero>mayor){
mayor=numero;
}
suma+=numero;
i++;

}

cout<<"el numero mayor es"<<mayor<<endl;
cout<<"el numero menor es"<menor<<endl;
cout<<"la suma de los sumeros es"<<suma<<endl;

return 0;
}
