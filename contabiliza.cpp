#include<iostream>
using namespace std;

int main()
{
	int ivncq=0,lvncq;
	float xvncq,svncq=0;
	cout<<"ingrese el limite l="; cin>>lvncq;
	do{
		

		cout<<"ingrese el numero x="; cin>>xvncq;
	ivncq=ivncq+1;
	svncq=svncq+xvncq;



	}while(ivncq<lvncq);
	cout<<"Se ingresaron "<<lvncq<<" numeros "<< "que sumaron "<<svncq<<endl;
	return 0;



}
