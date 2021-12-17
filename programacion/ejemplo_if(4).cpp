//Ejemplo funcion void parametros paso por referencia
//Alumno:Diaz Anaya Eduardo 
//Boleta:2020300206
#include <iostream>
#include <conio.h>
using namespace std;

void suma(int, int, int&);
void resta(int, int, int&);

int main(){
	int a, b, res;
	int opc;
	cout<<"Dame dos numeros:  "<<endl;
	cout<<"Primer numero: \t\n";
	cin>>a;
	cout<<"Segundo numero: \t\n";
	cin>>b;
	system("cls");
	cout<<"\n *********************************** "<<endl;
	cout<<"Los numeros que ingresaste son: "<<a<<"  y  "<<b<<endl<<endl;
    cout<<"\tCALCULAR\n-1.-Suma\n-2.-Resta"<<endl;
	cin>>opc;
    system("cls"); 
    
    if(opc==1){
    	suma(a,b,res);
	}
	else{
		resta(a,b,res);
	}
	
	cout<<"\nEl Resultado de la operacion es: "<<res<<endl;
	getch();
	return 0;
}

void suma(int a, int b, int& resp){
	cout<<"\nVamos a sumar: "<<a<<"  +  "<<b<<endl;
	resp=a+b;
}

void resta(int a, int b, int& resp){
	cout<<"\nVamos a restar: "<<a<<"  -  "<<b<<endl;
	resp=a-b;
}
