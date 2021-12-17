//Ejercicio 5 y 6: promedio alumno
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

struct Promedio{
	float nota1,nota2,nota3;
	float prom_f;
};

struct Alumno{
	char nombre[20],sexo[10];
	int edad;
	struct Promedio prom;
}alum[20];

int main(){
	int num_alum=0,pos=0;
	float p_mayor=0;
	
	cout<<"Digite el numero de alumnos a registrar: ";
	cin>>num_alum;
	system("cls");
	for(int i=0;i<num_alum;i++){
		fflush(stdin);
		cout<<"\t ALUMNO "<<i+1<<endl;
		cout<<"Nombre: ";
		cin.getline(alum[i].nombre,20,'\n');
		cout<<"Sexo: ";
		cin.getline(alum[i].sexo,10,'\n');
		cout<<"Edad: ";
		cin>>alum[i].edad;
		cout<<"\nNotas"<<endl;
		cout<<"Nota 1:";
		cin>>alum[i].prom.nota1;
		cout<<"Nota 2:";
		cin>>alum[i].prom.nota2;
		cout<<"Nota 3:";
		cin>>alum[i].prom.nota3;
		alum[i].prom.prom_f = ( alum[i].prom.nota1+alum[i].prom.nota2+alum[i].prom.nota3 ) /3;
		
		if(alum[i].prom.prom_f > p_mayor){
			p_mayor = alum[i].prom.prom_f;
			pos=i;
		}
	}
	
	cout<<"\n\n .:MEJOR PROMEDIO:."<<endl;
	cout<<"Nombre: "<<alum[pos].nombre<<endl;
	cout<<"Sexo: "<<alum[pos].sexo<<endl;
	cout<<"Edad: "<<alum[pos].edad<<endl;
	cout<<"Promedio: "<<setprecision(2)<<alum[pos].prom.prom_f<<endl;
	
	getch();
	return 0;
}
