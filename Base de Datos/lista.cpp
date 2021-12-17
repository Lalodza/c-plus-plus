/*
	Name: LISTA
	Copyright: IPN
	Author: DIAZ ANAYA EDUARDO
	Date: 16/03/21 19:15
	Description: crea una lista de cadenas para guardar nombres y ordenarlos
*/


#include <iostream>
#include <cstring>
#include <clocale>
#include <windows.h>
using namespace std;

class Lista
{
	private:
		int n;
		char **list;   //Se crea la lista de cadenas
		
	public:
		Lista()
		{
			n=0;
			list=new char*[1];  //Se reserva un renglon para la lista
			*list=new char[2];
			//*(list + 0)= new char[2]; //Se reserva dos caracteres para el uico renglon
			strcpy(*list, " ");  //Se asigna un espacio al renglon reservado
		}
		
		void Lee()
		{
			  char tmp[100];
			  cout<<"Dame el numero de nombres a registrar: ";
			  cin>>n;
			  list=new char*[n];
			  for(int r=0;r<n;r++){
			  	cout<<"\nIntroduce el nombre "<<r+1<<": ";
			  	fflush(stdin);
			  	cin.getline(tmp,100);
			  	*(list+r)=new char[strlen(tmp)+1];
			  	strcpy(*(list+r),tmp);
			  }
		}
			
		void Ordena()
		{
			char aux[100];
			for(int i=0;i<n-1;i++)
				for(int j=i+1;j<n;j++)
				if(strcmp(*(list+i),*(list+j))>0)
				{
					strcpy(aux,*(list+i));
					strcpy(*(list+i),*(list+j));
					strcpy(*(list+j),aux);
				}
		}
		
		void Imp()
		{
			for(int r=0;r<n;r++){
				cout<<*(list + r)<<'\n';
			}	
		}
		
		~Lista()
		{
			if(list)  //Pregunta si hubo reserva para la lista (si existe)
				for(int r=0;r<n;r++)
					delete *(list + r);  //libera memoria renglon a renglon
				delete []list;  //libera la lista
			cout<<"\n Memoria liberada\n FIN DEL PROGRAMA\n\n";
			system("pause");		
		}		
};

int main()
{
	setlocale(LC_ALL, "SPANISH");
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	Lista L;
	L.Lee();
	system("cls");
	cout<<"\n**La lista leida**\n";
	L.Imp();
	L.Ordena();
	cout<<"\n**Lista de nombres ordenada**\n";
	L.Imp();
	return 0;
}

