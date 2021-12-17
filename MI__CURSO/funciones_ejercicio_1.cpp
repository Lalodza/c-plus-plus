//Estructuaras Ejercicio 1
#include<iostream>
#include<conio.h>
using namespace std;

//Prototipo de funciones
void pedirDatos();
void mult(float x, float y);

float num1,num2;

int main(){
	pedirDatos();
	mult(num1,num2);
	
	getch ();
	return 0;
}

void pedirDatos(){
	cout<<"Digite dos numeros a multiplicar: \n";cin>>num1>>num2;
}
void mult(float x, float y){
	float resultado = x * y;
	cout<<"El resultado es: "<<resultado<<endl;
}
