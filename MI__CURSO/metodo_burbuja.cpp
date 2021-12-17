// Metodo Burbuja
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int numero[] = {4,1,3,2,5};
	int i,j,aux;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(numero[j] > numero[j+1]){
				aux = numero[j];
				numero[j] = numero[j+1];
				numero[j+1] = aux;
			}
		}
	}
	cout<<"Orden ascendente \n";
	for(i=0;i<5;i++){
		cout<<numero[i]<<" ";
	}
	
	cout<<"\nOrden descendente\n";
	for(i=4;i>=0;i--){
		cout<<numero[i]<<" ";
	}
	
	getch();
	return 0;
}
