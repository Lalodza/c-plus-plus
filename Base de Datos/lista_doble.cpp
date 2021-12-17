/*
	Name: LISTA DOBLE
	Copyright: IPN
	Author: DIAZ ANAYA EDUARDO
	Date: 17/05/21 19:12
	Description: ...
*/
#include<iostream>
using namespace std;

class Nodo
{
	private:
		int dato;
		Nodo *sig,*ant;
		Nodo *inicio1,*inicio2;
		
	public:	
		
		Nodo()
		{
			dato=0;
			sig=ant=inicio1=inicio2=NULL;
		}
		
		void Lee()
		{
			cout<<"\nIngresa el dato: ";
			cin>>dato;
		}
		
		void Inserta_Inicio1()
		{
			Nodo *nuevo=new Nodo;
			nuevo->Lee();
			
			if(inicio1==NULL && inicio2==NULL)
				inicio1=inicio2=nuevo;
			else{
				nuevo->sig=inicio1;
				inicio1->ant=nuevo;
				inicio1=nuevo;
			}
			cout<<"\nNodo insertado al inicio 1\n";
		}
		
		void Inserta_Inicio2()
		{
			Nodo *nuevo=new Nodo;
			nuevo->Lee();
			
			if(inicio1==NULL && inicio2==NULL)
				inicio1=inicio2=nuevo;
			else{
				nuevo->ant=inicio2;
				inicio2->sig=nuevo;
				inicio2=nuevo;
			}
			cout<<"\nNodo insertado al inicio 2\n";
		}
		
		void Inserta_Inter_Inicio1()
		{
			Nodo *nuevo=new Nodo;
			nuevo->Lee();
			
			if(inicio1==NULL)
			inicio1=inicio2=nuevo;
			else{
				int num;
				cout<<"Adelante de que numero quieres insertar: ";
				cin>>num;
				Nodo *ind=inicio1;
				while(ind&&ind->dato != num)
					ind=ind->sig;
				if(ind==NULL)
					cout<<"\nNo se encunetra el dato :(\n";
				else{
					nuevo->sig = ind->sig;
					nuevo->ant=ind;
					nuevo->sig->ant=nuevo;
					ind->sig=nuevo;
				}
			}
		}
		
		void Inserta_Inter_Inicio2()
		{
			Nodo *nuevo=new Nodo;
			nuevo->Lee();
			
			if(inicio2==NULL)
			inicio1=inicio2=nuevo;
			else{
				int num;
				cout<<"Adelante de que numero quieres insertar: ";
				cin>>num;
				Nodo *ind=inicio2;
				while(ind&&ind->dato != num)
					ind=ind->ant;
				if(ind==NULL)
					cout<<"\nNo se encunetra el dato :(\n";
				else{
					nuevo->sig=ind;
					nuevo->ant = ind->ant;
					nuevo->ant->sig=nuevo;
					ind->ant=nuevo;
					cout<<"\nNodo insertado\n";
				}
			}
		}
		
		void Muestra()
		{
			if(inicio1==NULL && inicio2 == NULL)
				cout<<"\nLista Vacia\n";
			else{
				cout<<"\nDatos de la lista por el inicio 1\n";
				for(Nodo *ind=inicio1;ind;ind=ind->sig)
					cout<<ind->dato<<"  ->  ";
					
				cout<<"\nDatos de la lista por el inicio 2\n";
				for(Nodo *ind=inicio2;ind;ind=ind->ant)
					cout<<ind->dato<<"  <-  ";
				cout<<endl<<endl;
			}
		}
		
		void Elimina_Inter_Inicio1()
		{
			if(inicio1==NULL)
				cout<<"La Lista esta vacia.\n";
			else{
				int num;
				cout<<"Ingresa el dato a eliminar: ";
				cin>>num;
				for(Nodo *ind=inicio1;ind;ind=ind->sig)
					if(ind->dato==num) //break;
				if(ind==NULL)
					cout<<"No se encontro el dato a eliminar\n";
				else{
					ind->ant->sig=ind->sig;
					ind->sig->ant=ind->ant;
					delete ind;
					cout<<"\nDato eliminado correctamente\n";
					Muestra();
				}
			}
		}
		
		void Elimina_Inter_Inicio2()
		{
			if(inicio1==NULL)
				cout<<"La Lista esta vacia.\n";
			else{
				int num;
				cout<<"Ingresa el dato a eliminar: ";
				cin>>num;
				for(Nodo *ind=inicio2;ind;ind=ind->ant)
					if(ind->dato==num) //break;
				if(ind==NULL)
					cout<<"No se encontro el dato a eliminar\n";
				else{
					ind->ant->sig=ind->sig;
					ind->sig->ant=ind->ant;
					delete ind;
					cout<<"\nDato eliminado correctamente\n";
					Muestra();
				}
			}
		}
		
		void Elimina_Lista()
		{
			Nodo *ind;
			while(inicio2)
			{
				ind=inicio2;
				inicio2=inicio2->ant;
				delete ind;
			}
			inicio1=inicio2=NULL;
			cout<<"Lista ELiminada\n";
		}
		
		void Menu()
		{
			char opc;
			do{
				system("cls");
				cout<<"INSERCCION EN UNA LISTA DOBLEMENTE ENLAZADA\n"
					<<"1.- Inserta por el inicio 1\n"
					<<"2.- Inserta por el inicio 2\n"
					<<"3.- Inserta intermedio desde el inicio 1\n"
					<<"4.- Inserta intermedio desde el inicio 2\n"
					<<"5.- Muestra\n"
					<<"6.- Elimina el nodo intermedio desde inicio 1\n"
					<<"7.- Elimina el nodo intermedio desde inicio 2\n"
					<<"8.- Eliminar toda la lista\n"
					<<"9.- Salir   \n"
					<<"\nIntroduzca la opcion: ";
				cin>>opc;
				
				switch(opc)
				{
					case '1': Inserta_Inicio1(); break;
					case '2': Inserta_Inicio2(); break;
					case '3': Inserta_Inter_Inicio1(); break;
					case '4': Inserta_Inter_Inicio2(); break;
					case '5': Muestra(); break;
					case '6': Elimina_Inter_Inicio1(); break;
					case '7': Elimina_Inter_Inicio2(); break;
					case '8': Elimina_Lista(); break;
					
					case '9': break;
				}
				system("pause");
			}while(opc != '9');
		}
		
		~Nodo()
		{
			Nodo *ind;
			while(inicio2)
			{
				ind=inicio2;
				inicio2=inicio2->ant;
				delete ind;
			}
			cout<<"Memoria Liberada\n";
		}

};

int main()
{
	setlocale(LC_ALL, "spanish");
	Nodo N;
	N.Menu();
	return 0;
}
