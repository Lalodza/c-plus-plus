//Estructuras Ejercicio 7
#include <iostream>
#include <conio.h>
using namespace std;

struct Etapas{
	int horas,minutos,segundos;
}et[50];

int main(){
	int n_et=0;
	int horas_t=0,minutos_t=0,segundos_t=0;
	
	cout<<"Digite el numeros de Etapas: ";
	cin>>n_et;
	system("cls");
	
	for(int i=0;i<n_et;i++){
		cout<<"Etapa "<<i+1<<endl;
		cout<<"Horas: ";
		cin>>et[i].horas;
		cout<<"Minutos: ";
		cin>>et[i].minutos;
		cout<<"Segundos: ";
		cin>>et[i].segundos;
		
		horas_t += et[i].horas;
		minutos_t += et[i].minutos;
		if(minutos_t >= 60){
			minutos_t = minutos_t - 60;
			horas_t++;
		}
		segundos_t +=et[i].segundos;
		if(segundos_t >= 60){
			segundos_t = segundos_t - 60;
			minutos_t++;
		}
		cout<<"\n";
	}
	system("cls");
	cout<<".:TIEMPO TOTAL:.\n";
	cout<<"Horas: "<<horas_t<<endl;
	cout<<"Minutos: "<<minutos_t<<endl;
	cout<<"Segundos: "<<segundos_t<<endl;
	
	getch ();
	return 0;
}
