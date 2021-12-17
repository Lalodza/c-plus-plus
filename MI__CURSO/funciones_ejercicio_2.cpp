//funciones Ejercicio 2
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

//Prototipo de funciones
void pedirDatos();
void al_cuadrado(float x);

float num1;

int main(){
	pedirDatos();
	al_cuadrado(num1);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite un numero para sacar el valor cuadrado: ";
	cin>>num1;
}

void al_cuadrado(float x){
	float resultado;
	resultado = pow(x,2);
	cout<<"El resultado es: "<<resultado<<endl;
}
