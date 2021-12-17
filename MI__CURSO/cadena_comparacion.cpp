//comparar cadenas de caracteres strcmp();
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
	char palabra1[20],palabra2[20];
	
	cout<<"Digite la 1era palabra: ";
	cin.getline(palabra1,20,'\n');
	cout<<"Digite la 2da palabra: ";
	cin.getline(palabra2,20,'\n');
	
	if(strcmp(palabra1,palabra2)==0){
		system("cls");
		cout<<"Ambas palabras son iguales :)";
	}
	else{
		if(strcmp(palabra1,palabra2) < 0){
			system("cls");
			cout<<palabra1<<" Es mayor alfabeticamente";
		}
		else{
			system("cls");
			cout<<palabra2<<" Es mayor alfabeticamente";
		}
	}
	
	
	getch();
	return 0;
}
