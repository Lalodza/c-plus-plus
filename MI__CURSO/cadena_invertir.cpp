//invertir una cadena de caracter strrev()

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
	char cad1[15],cad2[15];
	
	cout<<"Digita una palabra: ";
	cin>>cad1;
	strcpy(cad2,cad1);
	strrev(cad2);
	
	if(strcmp(cad1,cad2)==0){
		cout<<"Es una palabra Polindroma :)";
	}
	else{
		cout<<"No es un palabra Polindroma :(";
	}
	
	
	getch();
	return 0;
}
