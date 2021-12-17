//Ejemplo funcion void parametros paso por referencia
//Alumno:Diaz Anaya Eduardo 
//Boleta:2020300206
#include <iostream>
#include <conio.h>
using namespace std;

void multiplicacion(int, int, int&);
void division(int, int, int&);

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
    cout<<"\tCALCULAR\n-1.-Multiplicacion\n-2.-Division"<<endl;
	cin>>opc;
    system("cls"); 
    
    if(opc==1){
    	multiplicacion(a,b,res);
	}
	else{
		division(a,b,res);
	}
	
	cout<<"\nEl Resultado de la operacion es: "<<res<<endl;
	getch();
	return 0;
}

void multiplicacion(int a, int b, int& resp){
	cout<<"\nVamos a multiplicar: "<<a<<"  x  "<<b<<endl;
	resp=a*b;
}

void division(int a, int b, int& resp){
	cout<<"\nVamos a dividir: "<<a<<"  /  "<<b<<endl;
	resp=a/b;
}
