//funciones ejercicio 3
#include<iostream>
#include<conio.h>
using namespace std;

//prototipo de funcion
void pedirDatos();
void funpot(int x,int y);

int numero,exponente;

int main(){
	pedirDatos();
	funpot(numero,exponente);
	
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite un numero: ";
	cin>>numero;
	cout<<"Digite el exponente: ";
	cin>>exponente;
}

void funpot(int x,int y){
	long res=1;
	for(int i=1;i<=y;i++){
		res *= x;
	}
	cout<<"El resultado es: "<<res<<endl;
}

