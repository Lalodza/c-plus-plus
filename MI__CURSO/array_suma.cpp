#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numero[]={1,2,3,4,5};
	int suma=0;
	
	for(int i=0;i<5;i++){
		suma += numero[i];
	}
	
	cout<<"La suma de los numeros del arreglo es: "<<suma<<endl;
	getch();
	return 0;
}



