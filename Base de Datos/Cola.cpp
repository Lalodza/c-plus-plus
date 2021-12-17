/*
	Name: Cola
	Copyright: IPN
	Author: Diaz Anaya Eduardo / 2020300206
	Date: 15/06/21 20:13
	Description: Metodo de Cola's
*/

#include<iostream>
using namespace std;

class Cola
{
	private:
		int dato;
		Cola *sig;
		Cola *inicio;
		
	public:
		Cola()
		{
			dato=0;
			sig=inicio=NULL;	
		}	
		
		void Lee()
		{
			cout<<"\nDato a ingresar: ";
			cin>>dato;
		}
		
		void InsertaCola()
		{
			Cola *nuevo= new Cola;
			nuevo->Lee();
			
			if(inicio==NULL)
				inicio=nuevo;
			else{
				nuevo->sig=inicio;
				inicio=nuevo;
			}
			cout<<"\nDato insertado al final de la Cola\n";
			Muestra();
		}
		
		void EliminaCola_Primero()
		{
			if(inicio==NULL)
				cout<<"\nCola Vacia\n";
			else{
				Cola *primero=inicio, *ant;
				while(primero->sig != NULL){
					ant=primero;
					primero=primero->sig;
				}
				ant->sig=NULL;
				delete primero;
				cout<<"\nPrimero dato recibido ELIMINADO\n";
				Muestra();
			}
		}
		
		void Muestra()
		{
			if(inicio==NULL)
				cout<<"\nCola vacia\n";
			else{
				Cola *ind=inicio;
				while(ind){
					cout<<ind->dato<<'\t';
					ind=ind->sig;
				}
			}
			cout<<endl;
		}
		
		void Busca()
		{
			if(inicio==NULL)
				cout<<"\nCola Vacia\n";
			else{
				int num, cta=0;
				cout<<"Dato a Buscar: ";
				cin>>num;
				
				Cola *ind=inicio;
				while(ind){
					if(ind->dato==num)
						cta++;
					ind=ind->sig;
				}
				if(cta==0)
					cout<<"\nEl dato "<<num<<" no se encontro\n";
				else
					cout<<"\nEl dato "<<num<<" se encontro "<<cta<<" veces\n";
			}
		}
		
		void Menu()
		{
			char opc;
			do{
				system("cls");
				cout<<"\t***MENU DE COLAS***\n"
					<<"1.- Inserta en la Cola\n"
					<<"2,. Eliminar primero de la Cola\n"
					<<"3.- Mostrar\n"
					<<"4.- Buscar\n"
					<<"5.- SALIR\n"
					<<"\nElige una opcion: ";
				cin>>opc;
				switch(opc){
					case '1': InsertaCola(); break;
					case '2': EliminaCola_Primero(); break;
					case '3': cout<<"\nDatos de la Cola\n"; Muestra(); break;
					case '4': Busca(); break;
				}
				system("pause");
			}while(opc != '5');
		}
		
		~Cola()
		{
			Cola *ind;
			while(inicio){
				ind=inicio;
				inicio=inicio->sig;
				delete ind;
			}
			inicio=NULL;
		}
	
};

int main()
{
	setlocale(LC_ALL,"spanish");
	Cola C;
	C.Menu();
	return 0;
}
