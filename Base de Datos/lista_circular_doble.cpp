/*
	Name: LISTA CIRCULAR DOBLE
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
		Nodo *inicio,*fin;
	
	public:
		
		Nodo()
		{
			dato=0;
			sig=ant=inicio=fin=NULL;
		}
		
		void Lee()
		{
			cout<<"\nIngresa el dato: ";
			cin>>dato;
		}
		
		void Inserta_Inicio()
		{
			Nodo *nuevo=new Nodo;
			nuevo->Lee();
			if(inicio==NULL){
				inicio=fin=nuevo;
				nuevo->sig=nuevo->ant=nuevo;
			}else{
				nuevo->sig=inicio;
				nuevo->ant=fin;
				fin->sig=nuevo;
				inicio->ant=nuevo;
				inicio=nuevo;
			}
			cout<<"Nodo insertado al inicio\n";
		}	
		
		void Inserta_Fin()
		{
			Nodo *nuevo=new Nodo;
			nuevo->Lee();
			if(inicio==NULL){
				inicio=fin=nuevo;
				nuevo->sig=nuevo->ant=nuevo;
			}else{
				nuevo->sig=inicio;
				nuevo->ant=fin;
				fin->sig=nuevo;
				inicio->ant=nuevo;
				fin=nuevo;
			}
			cout<<"Nodo insertado al final\n";
		}
		
		void Inserta_Inter()
		{
			Nodo *nuevo=new Nodo;
			nuevo->Lee();
			if(inicio==NULL){
				inicio=fin=nuevo;
				nuevo->sig=nuevo;
			}else{
				int num;
				cout<<"\nAdelante de que dato quieres ingresar el Nodo: ";
				cin>>num;
				Nodo *ind=inicio;
				while(ind != fin && ind->dato !=num)
					ind=ind->sig;
				if(ind==fin)
					cout<<"El dato no se encontro :(\n";
				else{
					nuevo->sig=ind->sig;
					ind->sig=nuevo;
					cout<<"\nNodo Insertado\n";
				}
			}
		}
		
		void Muestra()
		{
			if(inicio==NULL)
				cout<<"Lista Vacia\n";
			else
			{
				Nodo *ind=inicio;
				do
				{
					cout<<ind->dato<<'\t';
					ind=ind->sig;
				}while(ind != inicio);
			}
		}
		
		void Busca()
		{
			if(inicio==NULL)
				cout<<"Lista Vacia\n";
			else{
				int num,cta=0;
				cout<<"Ingrsa el dato a buscar: ";
				cin>>num;
				Nodo *ind=inicio;
				do{
					if(ind->dato==num)
						cta++;
					ind=ind->sig;
				}while(ind!=inicio);
				if(cta==0)
					cout<<"\nNo se encontro el dato :(\n";
				else
					cout<<"El dato ( "<<num<<" ) se encontro "<<cta<<" veces\n";
			}
		}
		
		void Elimina_Inicio()
		{
			if(inicio==NULL)
				cout<<"Lista Vacia\n";
			else{
				Nodo *ind=inicio;
				inicio=inicio->sig;
				fin->sig=inicio;
				delete ind;
				cout<<"Nodo Eliminado\n";
			}
		}
		
		void Elimina_Lista()
		{
			if(inicio==NULL)
				cout<<"Lista Vacia\n";
			else{
				fin->sig=NULL;
				Nodo *ind;
				while(inicio){
					ind=inicio;
					inicio=inicio->sig;
					delete ind;
				}
				fin=inicio=NULL;
				cout<<"Lista Eliminada\n";
			}
		}
		
		void Hacer()
		{
			char opc;
			do{
				system("cls");
				cout<<"**INSERCCION EN UNA LISTA CIRCULAR DOBLE**\n\n"
					<<"1. Inserta por el inicio \n"
					<<"2. Inserta por el fin\n"
					<<"3. Inserta Nodo Intermedio\n"
					<<"4. Muestra Nodos\n"
					<<"5. Buscar Nodos\n"
					<<"6. Elimina el nodo del inicio\n"
					<<"7. Elimina el nodo del Fin\n"
					<<"8. Eliminar toda la lista\n"
					<<"9. Salir   \n"
					<<"\n\nOpcion: ";
				cin>>opc;
				
				switch(opc)
				{
					case '1': Inserta_Inicio(); break;
					case '2': Inserta_Fin(); break;
					case '3': Inserta_Inter(); break;
					case '4': Muestra(); break;
					case '5': Busca(); break;
					case '6': Elimina_Inicio(); break;
					case '7': Elimina_Inicio(); break;
					case '8': Elimina_Lista(); break;
					
					case '9': break;
				}
				system("pause");
			}while(opc != '9');
		}
		
		~Nodo()
		{
			if(inicio==NULL)
				return;
			else{
				fin->sig=NULL;
				Nodo *ind;
				while(inicio){
					ind=inicio;
					inicio=inicio->sig;
					delete ind;
				}
				fin=inicio=NULL;
			}
		} 
	
};

int main()
{
	Nodo N;
	N.Hacer();
	return 0;
}
