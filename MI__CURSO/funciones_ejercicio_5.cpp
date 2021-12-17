//funciones ejercicio 5
#include<iostream>
#include<conio.h>
using namespace std;

template <class TIPOD>
void despliegue(TIPOD dato);

int main(){
	int dato1=312;
	float dato2=3.1416;
	double dato3=456.1254;
	char dato4='a';
	
	despliegue(dato1);
	despliegue(dato2);
	despliegue(dato3);
	despliegue(dato4);
	
	getch();
	return 0;
}

template <class TIPOD>
void despliegue(TIPOD dato){
	cout<<"El dato es: "<<dato<<endl;
}

