/*
	Name:  Cola Ejercicio Banco 
	Copyright: IPN
	Author: Diaz Anaya Eduardo / 2020300206
	Date: 15/06/21 20:13
	Description: Utilizando metodo de colas se crea algoritmo para atender a la gente mayor de 60
*/

#include<iostream>
using namespace std;

class Banco
{
	private:
		int edad;
		string nombre;
		Banco *sig, *inicio;
	
	public:
		
		Banco()
		{
			edad=0;
			nombre=" ";
			sig=inicio=NULL;	
		}
		
		void Lee()
		{
			cout<<"\nNombre: ";
			fflush(stdin); getline(cin,nombre);
			cout<<"Edad: ";
			cin>>edad;	
		}	
		
		void Inserta()
		{
			Banco *ultimaPers= new Banco;
			ultimaPers->Lee();
			
			if(inicio==NULL)
				inicio=ultimaPers;
			else{
				ultimaPers->sig=inicio;
				inicio=ultimaPers;
			}
			system("cls");
			cout<<"\nCliente registrado :)\n";
			Muestra();
		}
		
		void MuestraMayor()
		{
			if(inicio==NULL)
				cout<<"\nCola Vacia\n";
			else{
				Banco *ind=inicio;
				while(ind){
					if(ind->edad >= 60){
					cout<<ind->edad<<"    "<<ind->nombre<<'\t';
					ind=ind->sig;
					}else {
						ind=ind->sig;
					}
				}
			}
			cout<<endl;
		}
		
		void Muestra()
		{
			if(inicio==NULL)
				cout<<"\nCola vacia\n";
			else{
				Banco *ind=inicio;
				while(ind){
					cout<<ind->edad<<" "<<ind->nombre<<"< - >";
					ind=ind->sig;
				}
			}
			cout<<endl<<endl;
		}
		
		void Menu()
		{
			char opc;
			do{
				system("cls");
				cout<<"\t***************\n"
					<<"\t* BANCO ESIME *\n"
					<<"\t***************\n\n"
					<<"1.- Ingresa un cliente\n"
					<<"2.- Mostrar Clientes\n"
					<<"3.- Mostrar Clientes Mayores a 60**\n"
					<<"0.- SALIR\n"
					<<"\nElige una opcion: ";
				cin>>opc;
				switch(opc){
					case '1': Inserta(); break;
					case '2': Muestra(); break;
					case '3': MuestraMayor(); break;
					//case '4': Busca(); break;
				}
				system("pause");
			}while(opc != '0');
		}
		
		~Banco()
		{
			Banco *ind;
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
	Banco B;
	B.Menu();
	return 0;
}

