//Pasar una cadena a MAYUSCULAS strupr()  strlwr()

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
/*
int main(){
	char cad1[20],cad2[20];
	
	cout<<"Digite una palabra: ";
	cin.getline(cad1,20,'\n');
	cout<<"Digite otra palabra: ";
	cin.getline(cad2,20,'\n');
	strupr(cad1);
	strupr(cad2);
	
	if(strcmp(cad1,cad2)==0){
		cout<<"Las dos cadenas son iguales :)";
	}else{
		cout<<"Las dos cadenas NO son iguales :(";
	}
	
	getch();
	return 0;
}
*/

int main(){
	char nombre[30];
	
	cout<<"Digite su nombre en mayusculas: ";
	cin.getline(nombre,30,'\n');
	system("cls");
	if(nombre[0] == 'A'){
		strlwr(nombre);
		cout<<"Su nombre es: "<<nombre;
	}else{
		cout<<"Su nombre es: "<<nombre;
	}
	
	getch();
	return 0;
}

