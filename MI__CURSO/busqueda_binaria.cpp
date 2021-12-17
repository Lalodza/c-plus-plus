//Busqueda binaria

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int numeros[]={1,2,3,4,5};
	int inf,sup,mitad,dato;
	char band='F';
	
	dato=4;
	//Busqueda Binaria
	inf=0;
	sup=5;
	
	while(inf <= sup){
		mitad=(inf+sup)/2;
		
		if(numeros[mitad]==dato){
			band='V';
			break;
		}
		if(numeros[mitad]>dato){
			sup = mitad;
			mitad = (inf+sup)/2;
		}
		if(numeros[mitad] < dato){
			inf = mitad;
			mitad = (inf+sup)/2;
		}
	}
	
	if(band=='V'){
		cout<<"El numero a sido enconcontrado "<<mitad<<endl;
	}else{
		cout<<"El numero NO a sido encontrado ;("<<endl;
	}
	
	getch();
	return 0;
}
