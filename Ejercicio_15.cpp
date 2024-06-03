#include<iostream>
using namespace std;
int main (){

int edad,entrada,ndescuento,adescuento;
entrada=70;
cout<<"dime tu edad";
cin>>edad;

if(edad<=5){
cout<<"tiene un descuento de %60";
ndescuento=entrada*0.60;
cout<<"la entrada con el descuento seria "<<ndescuento<<endl;
}
if(edad>=60){;
cout<<"tiene un descuento de %55";
adescuento=entrada*0.55;
cout<<"la entrada con el descuento seria " <<adescuento<<endl;
}
return 0;

}
