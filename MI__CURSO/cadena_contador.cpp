//longuitud de una cadena de caracteres "strlen()"

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
	char palabra[30];
	int longuitud=0;
	
	cout<<"digita una cadena de caracteres: ";
	cin.getline(palabra,30,'\n');
	longuitud = strlen(palabra);
	
	
	
	if(longuitud>=10){
		cout<<palabra;
	}
	else{
		cout<<"La palabra es menor a 10 caracteres ;("<<endl;
	}
	
	getch();
	return 0;
}
