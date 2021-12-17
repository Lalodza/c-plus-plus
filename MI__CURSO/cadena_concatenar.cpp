// concatenar cadenas de caracteres **strcat()

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
	char cad1[]= "Hola que tal ";
	char cad2[15],cad3[30];
	
	cout<<"Digita tu nombre: ";
	cin.getline(cad2,15,'\n');
	
	strcat(cad1,cad2);
	cout<<cad1;
	getch();
	return 0;
}

