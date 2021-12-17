//Ejemplo funcion void parametros paso por referencia
//Alumno:Diaz Anaya Eduardo 
//Boleta:2020300206
#include <iostream>
#include <conio.h>
using namespace std;

void cambiar1(int&);
void cambiar2(int&);

int main(){
	int opc, a, b;
	
	cout<<"Dame dos numeros:  "<<endl;
	cout<<"Primer numero: \t\n";
	cin>>a;
	cout<<"Segundo numero: \t\n";
	cin>>b;
	cout<<"\n *********************************** "<<endl;
	cout<<"Los numeros que ingresaste son: "<<a<<"  y  "<<b<<endl<<endl;
    cout<<"¿Que numero quieres cambiar?\n-El Primero(1)\n-El Segundo(2)"<<endl;
    cin>>opc;
    
    if(opc==1){
    	cambiar1(a);
	}
	else{
		cambiar2(b);
	}
	
	cout<<"\nAhora los numeros son: "<<a<<" y "<<b<<endl;
	getch();
	return 0;
}

void cambiar1(int& num){
	int nuevo;
	cout<<"El numero que vamos a cambiar es:  "<<num<<endl;
	cout<<"¿Por cual quieres cambiarlo?"<<endl;
	cin>>nuevo;
	num=nuevo;
}

void cambiar2(int& num){
	int nuevo;
	cout<<"El numero que vamos a cambiar es:  "<<num<<endl;
	cout<<"¿Por cual quieres cambiarlo?"<<endl;
	cin>>nuevo;
	num=nuevo;
}
