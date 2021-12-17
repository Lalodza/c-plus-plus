/*
	Name: LISTA SIMPLE
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
		Nodo *sig,*atr;
		Nodo *inicio;
		
	public: 
		Nodo()
		{
			dato=0;
			sig=NULL;
			atr=NULL;
			inicio=NULL;
		}
		
		void Inserta_inicio()
		{
			Nodo *nuevo=new Nodo;
			nuevo->Lee();
			
			if(inicio==NULL)
				inicio=nuevo;
			else{
				nuevo->sig=inicio;  //el sig de nuevo lo ponemos al inicio
				inicio=nuevo;
			}
			cout<<"\nNodo insertado al inicio (izquierda)\n";	
		}
		/*
		void Inserta_Fin()
		{
			Nodo *nuevo=new Nodo;
			nuevo->Lee();
			
			if(inicio==NULL)
				inicio=nuevo;
			else{
				for(Nodo *ind=inicio ;ind->sig != NULL; ind=ind->sig)
					ind->sig=nuevo;
					
			}
			cout<<"\nNodo insertado\n"; 
		}
		*/
			
		void Inserta_Fin()
		{
			Nodo *nuevo=new Nodo;
			nuevo->Lee();
			
			if(inicio==NULL)
				inicio=nuevo;
			else{
				Nodo *ind=inicio;
				while(ind->sig != NULL)
					ind=ind->sig;
				ind->sig=nuevo;
			}
			cout<<"\nNodo insertado\n"; 
		}
		
		void Inserta_Inter()
		{
			Nodo *nuevo=new Nodo;
			nuevo->Lee();
			if(inicio==NULL)
				cout<<"Lista Vacia\n";
			else{
				int num;
				cout<<"Despues de que dato se inserta: ";
				cin>>num;
				
				Nodo *atr, *ind=inicio;
				while(ind->dato != num){
					atr=ind;
					ind=ind->sig;
				}
				if(ind==NULL)
					cout<<"No se encontro el nodo a insertar\n";
				else{
					atr->sig=nuevo;
					nuevo->sig=ind;
					cout<<"Nodo Insertado\n";
				}
			}
		}
		
		void Lee()
		{
			cout<<"\nIngresa el dato: ";
			cin>>dato;
		}
		
		void Muestra()
		{
			if(inicio==NULL)
				cout<<"\nLista vacia\n";
			else{
				Nodo *ind=inicio;  //creamos a ind y lo ponemos al inicio
				cout<<"\nDatos de la lista\n INICIO ->";
				while(ind!=NULL){
					cout<<ind->dato<<"--> ";
					ind=ind->sig;
				}
			}
		}
		
		void Busca()
		{
			if(inicio== NULL)
				cout<<"Lista Vacia...\n";
			else{
				int num, cta=0;
				cout<<"Dato a Buscar: ";
				cin>>num;
				Nodo *ind=inicio;
				while(ind != NULL){
					if(ind->dato == num)
						cta++;
				}
				if(cta==0)
					cout<<"\nDato no encontrado";
				else
					cout<<"El dato "<<num<<" se encontro "<<cta<<" veces.";
			}
		}
		
		void Elimina_Inter()
		{
			if(inicio==NULL)
				cout<<"Lista Vacia\n";
			else{
				int num;
				cout<<"Dato a eliminar: ";
				cin>>num;
				Nodo *atr, *ind=inicio;
				while(ind->dato != num){
					atr=ind;
					ind=ind->sig;
				}
				if(ind==NULL)
					cout<<"No se encontro\n";
				else{
					atr->sig=ind->sig;
					delete ind;
					cout<<"Dato eliminado\n";
				}
			}
		}
		
		void Elimina_Inicio()
		{
			if(inicio==NULL)
				cout<<"Lista Vacia\n";
			else{
				Nodo *ind=inicio;
				//ind=inicio;
				inicio=inicio->sig;
				delete ind;
				cout<<"Dato eliminado\n";
			}
		}
		
		void Elimina_Fin()
		{
			if(inicio==NULL)
				cout<<"Lista Vacia\n";
			else{
				Nodo *ant, *ind=inicio;
				while(inicio){
				ant=ind;
				ind=ind->sig;
				}
			ant->sig=NULL;
			delete ind;
			cout<<"Dato eliminado\n";
			} 
		}
		
		void Elimina_Lista()
		{
			if(inicio==NULL)
				cout<<"\nLista Vacia\n";
			else{
				Nodo *ind;
				while(inicio){
					ind=inicio;
					inicio=inicio->sig;
					delete ind;
				}
			cout<<"\Lista Eliminada\n";
			}
		}
		
		void Menu()
		{
			char opc;
			do{
				system("cls");
				cout<<"\t**LISTA SIMPLEMENTE ENLAZADA**\n"
					<<"1.-Inserta por el inicio\n"
					<<"2.-Inserta por el Final\n"
					<<"3.-Inserta intermedio\n"
					<<"4.-Mostrar\n"
					<<"5.-Buscar\n"
					<<"6.-Eliminar al Inicio\n"
					<<"7.-Eliminar al Final\n"
					<<"8.-Eliminar al intermedio\n"
					<<"9.-Eliminar Lista\n"
					<<"0.-SALIR\n";
				cin>>opc;
				switch(opc){
					case '1': Inserta_inicio(); break;
					case '2': Inserta_Fin(); break;
					case '3': Inserta_Inter(); break;
					case '4': Muestra(); break;
					case '5': Busca(); break;
					case '6': Elimina_Inicio(); break;
					case '7': Elimina_Fin(); break;
					case '8': Elimina_Inter(); break;
					case '9': Elimina_Lista(); break;
					case '10': break;
										
				}
				system("pause");
			}while(opc != '0');
		}
		
		~Nodo()
		{
			Nodo *ind;
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
	Nodo N;
	N.Menu();
	N.Muestra();
	return 0;
}
