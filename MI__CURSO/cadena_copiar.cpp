//copiar una cadena de caracteres *strcpy(copia , original);

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
	char palabra1[40],palabra2[40];
	
	cout<<"Digite la cadena original: ";
	cin.getline(palabra1,20,'\n');
	cout<<"Ahora vamos a copiar esta cadena :)\n";
	system("pause");
	strcpy(palabra2,palabra1);
	system("cls");
	
	cout<<"La copia es la siguiente: "<<palabra2;
	
	
	
	getch();
	return 0;
}


