//Estructuras anidadas fflush(stdin); para vaciar el buffer

#include <iostream>
#include <conio.h>
using namespace std;

struct info_direccion{
	char direccion[30];
	char ciudad[20];
	char provincia[20];
};

struct empleado{
	char nombre[20];
	struct info_direccion dir_empleado;
	double salario;
}empleados[2];

int main(){
	
	for(int i=0;i<2;i++){
		fflush(stdin); //VACIAR EL BUFFER****************************************************
		cout<<"Digite su nombre: ";
		cin.getline(empleados[i].nombre,20,'\n');
		cout<<"Digite su direccion: ";
		cin.getline(empleados[i].dir_empleado.direccion,30,'\n');
		cout<<"Digite su ciudad: ";
		cin.getline(empleados[i].dir_empleado.ciudad,20,'\n');
		cout<<"Digite su provincia: ";
		cin.getline(empleados[i].dir_empleado.provincia,20,'\n');
		cout<<"Digite su salario: ";
		cin>>empleados[i].salario;
		cout<<"\n";
	}
	system("cls");
	//IMPRIMIR LOS DATOS
	
	for(int i=0;i<2;i++){
		cout<<"Nombre: "<<empleados[i].nombre<<endl;
		cout<<"Direccion: "<<empleados[i].dir_empleado.direccion<<endl;
		cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
		cout<<"Provincia: "<<empleados[i].dir_empleado.provincia<<endl;
		cout<<"Salario: "<<empleados[i].salario<<endl;
		cout<<"\n";	
	}
	
	
	getch();
	return 0;
}
