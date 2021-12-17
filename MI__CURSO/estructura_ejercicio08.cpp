//Estructura ejercicio 8
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct Persona{
	char nombre[20];
	bool discapacidad;
}per[20],perCon[10],perSin[10];

int main(){
	int num_p=0,pos1=0,pos2=0;
	char aux[5];
		
	cout<<"Digite en numero de personas que va a registrar: ";
	cin>>num_p;
	system("cls");
	cout<<"DATOS"<<endl;
	for(int i=0;i<num_p;i++){
		fflush(stdin);
		cout<<"Persona ["<<i+1<<"]"<<endl;
		cout<<"Nombre:  ";
		cin>>per[i].nombre;
		cout<<"Discapacidad (si / no): ";
		cin>>per[i].discapacidad;
		
			if( (aux == "si" ) || (aux == "SI") || (aux == "Si") || (aux == "s") ){
			per[i].discapacidad = true;
			}
			else{
			per[i].discapacidad = false;
			}
		
		if(per[i].discapacidad == true){
			strcpy(perCon[pos1].nombre,per[i].nombre);
			pos1++;
		}
		else if(per[i].discapacidad == false){
			strcpy(perSin[pos2].nombre,per[i].nombre);
			pos2++;
		}
		
		cout<<"\n";
	}
	system("cls");
	
	for(int i=0;i<num_p;i++){
		cout<<"Nombre: "<<per[i].nombre<<endl;
		
	}
	
	cout<<"Personas CON Discapacidad"<<endl;
	for(int j=0;j<pos1;j++){
		cout<<"Nombre: "<<perCon[j].nombre<<endl;
	}
	cout<<"\nPersonas SIN Discapacidad"<<endl;
	for(int k=0;k<pos2;k++){
		cout<<"Nombre: "<<perSin[k].nombre<<endl;
	}
	
	getch ();
	return 0;
}
