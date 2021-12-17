//ESTRUCTURAS  "struct"

#include <iostream>
#include <conio.h>
using namespace std;

/*
struct Persona{
	char nombre[20];
	int edad;
}
persona1= {"Eduardo",22},
persona2= {"Genaro",20};

int main(){
	cout<<"Nombre: "<<persona1.nombre<<endl;
	cout<<"Edad: "<<persona1.edad<<endl;
	cout<<"\nNombre: "<<persona2.nombre<<endl;
	cout<<"Edad: "<<persona2.edad<<endl;	
	
	getch();
	return 0;
}
*/

struct Persona{
	char nombre[20];
	int edad;
}persona1,persona2;

int main(){
	cout<<"Nombre: ";
	cin.getline(persona1.nombre,20,'\n');
	cout<<"\nEdad: ";
	cin>>persona1.edad;
	system("cls");
	cout<<"**DATOS**"<<endl;
	cout<<"Nombre: "<<persona1.nombre<<endl;
	cout<<"Edad: "<<persona1.edad<<endl;
	
	
	getch();
	return 0;
}
