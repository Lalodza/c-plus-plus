//Ejemplo funcion void parametros paso por referencia
//Alumno:Diaz Anaya Eduardo 
//Boleta:2020300206
#include <iostream>
#include <conio.h>
using namespace std;

void suma1(int&);
void suma2(int&);

int main(){
	int opc, a, b;
	
	cout<<"Dame dos numeros:  "<<endl;
	cout<<"Primer numero: \t\n";
	cin>>a;
	cout<<"Segundo numero: \t\n";
	cin>>b;
	system("cls");
	cout<<"\n *********************************** "<<endl;
	cout<<"Los numeros que ingresaste son: "<<a<<"  y  "<<b<<endl<<endl;
    cout<<"¿A que numero quieres sumarle 10?\n-El Primero(1)\n-El Segundo(2)"<<endl;
    cin>>opc;
    system("cls"); 
    
    if(opc==1){
    	suma1(a);
	}
	else{
		suma2(b);
	}
	
	cout<<"\nAhora los numeros son: "<<a<<" y "<<b<<endl;
	getch();
	return 0;
}

void suma1(int& num){
	cout<<"Vamos a sumarle 10 al sig. numero:  "<<num<<endl;
	num=num+10;
}

void suma2(int& num){
	cout<<"Vamos a sumarle 10 al sig. numero:  "<<num<<endl;
	num=num+10;
}
