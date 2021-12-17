#include <iostream>
#include <conio.h>

using namespace std;
/*
int main(){
	int numero[100],n,mayor=0;
	
	cout<<"Digite el numero de elemnetos del arreglo: ";cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<i+1<<".- Digite un numero: ";cin>>numero[i];
		if(numero[i] > mayor){
			mayor = numero[i];
		}
	}
	
	cout<<"El elemento mayor de el arreglo es: "<<mayor;
	getch ();
	return 0;
}
*/

int main(){
	int numero[100],n,suma=0;
	
	cout<<"Digite el numero de elementos del arreglo: ";cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<i+1<<".- Digite un numero: ";cin>>numero[i];
		suma += numero[i];
	}
	system("cls");
	for(int i=0;i<n;i++){
		if(numero[i] == suma){
			cout<<"El numero que equivale a la suma de los valores del arreglo es: "<<numero[i];	
		}
	}
	getch();
	return 0;
}
