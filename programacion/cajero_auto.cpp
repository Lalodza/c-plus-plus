#include <iostream>
using namespace std;

int main( ) {
	int saldo_inicial = 1000;	 
	int saldo, retiro, opcion, agregar;
	
	cout<<"\t\t Bienvenido a su Cajero Virtual";
	cout<<"\n Escoge una opcion: ";
	cout<<"\n 1. Ingreso en cuenta";
	cout<<"\n 2. Retiro ";
	cout<<"\n 3. Ver saldo de cuenta ";
	cout<<"\n 0. Salir"<<endl;
	cin>>opcion;
	
	if (opcion==1){
		cout<<"\n Ingrese la cantidad a ingresar";
		cin>>agregar;
		saldo = saldo_inicial + agregar;
		cout<<"\n Cantidad disponible en cuenta: "<<saldo<<endl;
	}
	else if (opcion==2){
		cout<<"\n ¿Que cantidad desea reirar? ";
		cin>>retiro;
		if (retiro>saldo_inicial){
			cout<<"\n La cantidad que desea retirar es mayor a la diponible "<<endl;
		}	
		saldo = saldo_inicial - retiro;
		cout<<"\n Su saldo actual es: "<<saldo<<endl;
	}	
	else if (opcion==3){
		cout<<"\n Su saldo disponible en la cuenta es: "<<endl;
		saldo = saldo_inicial;
		cout<<saldo<<endl;
	}
	
	system ("pause");
	return 0;
}
