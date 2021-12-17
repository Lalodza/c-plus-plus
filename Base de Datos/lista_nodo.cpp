

#include<iostream>
using namespace std;

class Nodo
{
	private:
		int dato;
		Nodo *sig;
		Nodo *inicio;
		
	public:
		Nodo()
		{
			dato=0;
			sig=NULL;
			inicio=NULL;
		}
		
		void Inserta_inicio()
		{
			Nodo *nuevo=new Nodo;
			nuevo->Lee();
			
			if(inicio==NULL)
				inicio=nuevo;
			else{
				nuevo->sig=inicio;
				inicio=nuevo;
			}
			cout<<"\nNodo insertado\n";
		}
		
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
		
		
		void Lee()
		{
			cout<<"\nIngresa el dato: ";
			cin>>dato;
		}
		
		void Busca()
		{
			if(inicio==NULL)
				cout<<"\nLista vacia\n";
			else{
				int num,cta=0;
				cout<<"Dato a buscar?: ";
				cin>>num;
				Nodo *ind=inicio;
				while(ind != NULL){
					if(ind->dato==num)
						cta++;
					ind=ind->sig;
				}
				if(cta==0)
					cout<<"\nNo se encontro el dato";
				else
					cout<<"\nEl dato "<<num<<"se encontro"<<cta<<" veces\n";
			}			
		}
		
		void Muestra()
		{
			if(inicio==NULL)
				cout<<"\nLista vacia\n";
			else{
				Nodo *ind=inicio;
				cout<<"\nDatos de la lista\n INICIO ->";
				while(ind != NULL){
					cout<<ind->dato<<"-->";
					ind=ind->sig;
				}
			}
		}
		
		~Nodo()
		{
			Nodo *ind;
			while(inicio)
			{
				ind=inicio;
				inicio=inicio->sig;
				delete ind;
			}
			inicio=NULL;
		}		
	
};

int main(){
	Nodo N;
	char rep;
	do{
		system("cls");
		cout<<"LISTA SIMPLEMENTE ENLAZADA INSERCCION POR EL INICIO ";
		//N.Inserta();
		cout<<"\nOtro nodo (S/N): ";
		cin>>rep;
	}while(rep== 's' || rep== 'S');
	N.Muestra();
	return 0;
}
