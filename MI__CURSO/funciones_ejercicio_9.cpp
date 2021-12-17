//funciones ejercicio 9

#include<iostream>
#include<conio.h> 	 		 
using namespace std;

void tiempo(int,int&,int&,int&);

int main(){
	int totalSeg,hora,min,seg;
	
	cout<<"digite el numero total de segundos: ";
	cin>>totalSeg;
	
	tiempo(totalSeg,hora,min,seg);
	
	cout<<"\nTiempo equivlante a la cantidad de segundos: "<<endl;
	cout<<"\nHoras: "<<hora;
	cout<<"\nMinutos: "<<min;
	cout<<"\nSegundos: "<<seg;
	
	getch ();
	return 0;
}

void tiempo(int totalSeg,int& hora,int& min,int& seg){
	hora = totalSeg/3600;
	totalSeg %= 3600;
	min = totalSeg/60;
	seg = totalSeg%60;
}

