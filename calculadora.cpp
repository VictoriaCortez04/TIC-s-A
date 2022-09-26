
//Programa que presenta las operaciones básicas
//Modificada  por victoria nayeli cortez quinde 
//Fecha: 26-09-2022

#include<iostream>
using namespace std;

int main(
		)
{
	float xvncq,yvncq,svncq,mvncq,dvncq,rvncq;
	//Ingreso de datos
	cout<<"Ingrese en valor de x=:";cin>>xvncq;
	cout<<"Ingrese en valor de y=:";
	//Operaciones 
	cin>>yvncq;
	svncq=xvncq+yvncq;
	mvncq=xvncq*yvncq;
	dvncq=xvncq/yvncq;
	rvncq=xvncq-yvncq;
	//Muestra los resutaldos.

cout<<"Las suma de "<<xvncq<<" + "<<yvncq<<" = "<<svncq<<endl;
cout<<"Las multiplicacion de "<<xvncq<<" * "<<yvncq<<" = "<<mvncq<<endl; cout<<"Las division de "<<xvncq<<" / "<<yvncq<<" = "<<dvncq<<endl;


	cout<<"Las resta de "<<xvncq<<" - "<<yvncq<<" = "<<rvncq<<endl;
	return 0 

	;

}

