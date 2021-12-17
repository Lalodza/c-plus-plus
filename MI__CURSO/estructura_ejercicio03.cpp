//estructura ejercicio 3 salario mayor y menor
#include <iostream>
#include <conio.h>
using namespace std;

struct Empleado{
	char nombre[20];
	float salario;	
}emp[100];

int main(){
	int num_emp, posM=0, posm=0;
	float mayor=0, menor=999999;
	
	cout<<"Digite el numero de empleados a registrar: ";
	cin>>num_emp;
	
	for(int i=0;i<num_emp;i++){
		fflush(stdin);
		cout<<"Nombre: ";
		cin.getline(emp[i].nombre,20,'\n');
		cout<<"Salario: ";
		cin>>emp[i].salario;
		cout<<"\n";
		
		if(emp[i].salario > mayor){
			mayor = emp[i].salario;
			posM=i;
		} 
		if(emp[i].salario < menor){
			menor = emp[i].salario;
			posm=i;
		}
		cout<<"\n";
	}
	
	cout<<".:DATOS DEL EMPLEADO CON MAYOR SALARIO:.\n";
	cout<<"Nombre: "<<emp[posM].nombre<<endl;
	cout<<"Salario: "<<emp[posM].salario<<endl;
	cout<<"\n.:DATOS DEL EMPLEADO CON MENOR SALARIO:.\n";
	cout<<"Nombre: "<<emp[posm].nombre<<endl;
	cout<<"Salario: "<<emp[posm].salario<<endl;
	
	getch();
	return 0;
}
