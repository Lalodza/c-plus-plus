//Ejemplo funcion void parametros paso por referencia
//Alumno:Diaz Anaya Eduardo 
//Boleta:2020300206
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

void cambiar (string, string&);

int main(){
	string passw, user, a;
	
	cout<<"**********REGISTRO*********"<<endl;
	cout<<"Usuario: \t\n";
	cin>>user;
	cout<<"Contraseņa: \t\n";
	cin>>passw;
	system ("cls");
	cout<<"\n *********************************** "<<endl;
	cout<<"Vamos a entrar a tu cuenta \n";
    cout<<"Dijita tu Contraseņa para el Usuario: "<<user<<endl;
    cin>>a;
    
    if(a==passw){
    	system ("cls");
    	cout<<"Tu contraseņa es correcta \n";
	}
	else{
		system ("cls");
		cout<<"Tu contraseņa es INCORERCTA \n";
		cout<<"Vamos a cambiarla  :)  \n";
		cambiar (user, passw);
		cout<<"\nListo ya se cambio tu contraseņa \n";
    	cout<<"\n *********************************** "<<endl;
    	cout<<"USUARIO:  "<<user<<endl;
    	cout<<"CONTRASEŅA(nueva):  "<<passw<<endl;
		}
    
	getch();
	return 0;
	}

void cambiar (string a, string& b){
	string x;
	cout<<"___________________________________\n";
	cout<<"El Usuario es: "<<a<<endl;
	cout<<"Dijita la Nueva Contraseņa";
	cin>>x;
	b=x;
	system("cls");
}

