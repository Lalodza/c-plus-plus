//trasformar una cadena a numeros atoi() atof()
//requieren la libreria <stdlib.h>

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main(){
	char cad1[10];
	char cad2[10];
	float suma=0;
	
	cout<<"Dame un numero entero: ";
	cin>>cad1;
	cout<<"Dame otro numero decimal: ";
	cin>>cad2;
	
	suma= atoi(cad1) + atof(cad2);
	
	cout<<"La suma de los valores es: "<<suma<<endl;
	
	
		
	getch();
	return 0;
}
