/*
	Name: Pila
	Copyright: IPN
	Author: Diaz Anaya Eduardo / 2020300206
	Date: 15/06/21 20:13
	Description: Metodo de Pila's
*/

#include<iostream>
using namespace std;

class Pila
{
	private:
		string nombre;
		Pila *cima;
		Pila *abj;
		
	public:
		Pila()
		{
			nombre= " ";
			abj=cima=NULL;	
		}	
		
		void Lee()
		{
			cout<<"\nDato a ingresar: ";
			fflush(stdin);
			getline(cin,nombre);
		}
		
		void Meter()
		{
			Pila *nuevo= new Pila;
			nuevo->Lee();
			
			if(cima==NULL)
				cima=nuevo;
			else{
				nuevo->abj=cima;
				cima=nuevo;
			}
			cout<<"\nDato insertado en la cima\n";
			Muestra();
		}
		
		void Sacar()
		{
			if(cima==NULL)
				cout<<"\nPila Vacia\n";
			else{
				Pila *ind=cima;
				cima=cima->abj;
				delete ind;
			}
			cout<<"\nEl primer dato sacado de la Pila\n";
			Muestra();
		}
		
		void Muestra()
		{
			if(cima==NULL)
				cout<<"\nPila vacia\n";
			else{
				Pila *ind=cima;
				while(ind){
					cout<<ind->nombre<<'\n';
					ind=ind->abj;
				}
			}
		}
		
		void Busca()
		{
			if(cima==NULL)
				cout<<"\nPila Vacia\n";
			else{
				int cta=0;
				string nom;
				cout<<"Dato a Buscar: ";
				fflush(stdin);
				getline(cin,nom);
				
				Pila *ind=cima;
				while(ind){
					if(ind->nombre==nom)
						cta++;
					ind=ind->abj;
				}
				if(cta==0)
					cout<<"\nEl dato "<<nom<<" no se encontro\n";
				else
					cout<<"\nEl dato "<<nom<<" se encontro "<<cta<<" veces\n";
			}
		}
		
		void Menu()
		{
			char opc;
			do{
				system("cls");
				cout<<"\t***MENU DE PILAS***\n"
					<<"1.- Meter (PUSH)\n"
					<<"2,. Sacar (POP)\n"
					<<"3.- Mostrar\n"
					<<"4.- Buscar\n"
					<<"5.- SALIR\n"
					<<"\nElige una opcion: ";
				cin>>opc;
				switch(opc){
					case '1': Meter(); break;
					case '2': Sacar(); break;
					case '3': cout<<"\nDatos de la Pila\n"; Muestra(); break;
					case '4': Busca(); break;
				}
				system("pause");
			}while(opc != '5');
		}
		
		~Pila()
		{
			Pila *ind;
			while(cima){
				ind=cima;
				cima=cima->abj;
				delete ind;
			}
			cima=NULL;
		}
	
};

int main()
{
	setlocale(LC_ALL,"spanish");
	Pila P;
	P.Menu();
	return 0;
}
