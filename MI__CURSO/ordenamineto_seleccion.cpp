//Ordenamiento por seleccion
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int numero[]={3,2,1,5,4};
	int i,j,aux,min;
	
	for(i=0;i<5;i++){
		min=i;
		for(j=i+1;j<5;j++){
			if(numero[j] < numero[min]){
				min = j;
			}
		}
		aux=numero[i];
		numero[i]=numero[min];
		numero[min]=aux;
	}
	cout<<"Orden ascendente\n";
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
