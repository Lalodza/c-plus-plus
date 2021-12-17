//funciones ejercicio 4
#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
void calcular(float d);

float num;

int main(){
	pedirDatos();
	calcular(num);
	
	getch ();
	return 0;
}

void pedirDatos(){
	cout<<"Ingresa un numero con punto decimal: ";
	cin>>num;
}

void calcular(float d){
	int aux=d;
	float res;
	res = d-aux;
	cout<<"La parte fraccionaria del numero es: "<<res<<endl;
}

