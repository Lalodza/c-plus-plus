//estructuras ejercicio alumno
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct Alumno{
	char nombre[20];
	int edad;
	float promedio;
}alum[3];

int main (){
	int prom_may=0,aux=0,cont=0;
	
	for(int i=0;i<3;i++){
		fflush(stdin);
		cout<<"Nombre alumno "<<i+1<<": ";
		cin.getline(alum[i].nombre,20,'\n');
		cout<<"Edad: ";
		cin>>alum[i].edad;
		cout<<"Promedio: ";
		cin>>alum[i].promedio;
		cout<<endl;
	}
	/*
	if(alum[0].promedio > alum[1].promedio){
		if(alum[0].promedio > alum[2].promedio){
			cout<<"El alumno con el promedio mas alto es: "<<alum[0].nombre<<endl;
		}else{
			cout<<"El alumno con el promedio mas alto es: "<<alum[2].nombre<<endl;
		}
	}else if(alum[1].promedio > alum[2].promedio){
		cout<<"El alumno con el promedio mas alto es: "<<alum[1].nombre<<endl;
	}
	else{
		cout<<"El alumno con el promedio mas alto es: "<<alum[2].nombre<<endl;
	}
	*/
	for(int i=0;i<3;i++){
		aux = alum[i].promedio;
		if(aux > prom_may){
			prom_may = aux;
			cont=i;
		}
		else{
			cout<<"validando el promedio mas alto...\n";
		}
	}
	
	cout<<"\nEl promedio mayor es de: "<<alum[cont].nombre<<endl;
	
	getch();
	return 0;
}
