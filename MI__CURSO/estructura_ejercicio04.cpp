//Estructuras ejercicio 4
#include <iostream>
#include <conio.h>
using namespace std;

struct atleta{
	char nombre[30];
	char pais[20];
	int num_medallas;
}atl[20];

int main(){
	int num_atletas=0, may_med=0, pos=0;
	cout<<"Digite el numero de atletas que se van a resgistrar: ";
	cin>>num_atletas;
	system("cls");
	for(int i=0;i<num_atletas;i++){
		fflush(stdin);
		cout<<i+1<<".- Nombre del atleta: ";
		cin.getline(atl[i].nombre,30,'\n');
		cout<<"Pais: ";
		cin.getline(atl[i].pais,20,'\n');
		cout<<"Numero de medallas: ";
		cin>>atl[i].num_medallas;
		cout<<endl;
		
		if(atl[i].num_medallas > may_med){
			may_med = atl[i].num_medallas;
			pos = i;
		}
	}
	system("cls");
	cout<<".:EL ATLETA CON MAYOR NUMERO DE MEDALLAS:."<<endl;
	cout<<"Nombre: "<<atl[pos].nombre<<endl;
	cout<<"Pais: "<<atl[pos].pais<<endl;
	
	getch();
	return 0;
}
