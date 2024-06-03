#include<iostream>
using namespace std;
int main(){

int num,menor;

cout<<"ingrese 5 numero enteros";
cin>>num;

for(int i=1;i<5;i++)
{
	cin>>num;
	if(num<menor)
	{
		menor=num;
	}
}
cout<<"el numero menor es"<<menor<<endl;

return 0;
}
