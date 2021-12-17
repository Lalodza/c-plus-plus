//Busqueda secuencial

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int a[]={3,4,2,1,5};
	int i,dato;
	char band= 'F';
	
	//Busqueda secuencial
	dato=1;
	i=0;
	while((band=='F')&&(i<5)){
		if(a[i]==dato){
			band='V';
		}
		i++;
	}	
	
	if(band=='F'){
		cout<<"El dato no se encontro en el arreglo :("<<endl;
	}else if(band=='V'){
		cout<<"El dato se encontro en la posicion "<<i-1<<endl;
	}
	
	getch();
	return 0;
}
