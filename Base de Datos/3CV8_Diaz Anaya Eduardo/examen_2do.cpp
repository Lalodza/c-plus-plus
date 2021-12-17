/*
	Name: Examen
	Copyright: IPN
	Author: Diaz Anaya Eduardo / 2020300206
	Date: 15/06/21 20:13
	Description: Examen de 2do parcial
*/

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

class Nodo
{
	private:
		int No_emp, N_nod;
		float Prom,	desv;
		string Nom, Dpto;
		Nodo *sig, *ant, *ini, *fin;
	
	public:
		Nodo()
		{
			No_emp=N_nod=0;
			Prom=desv=0.0;
			Nom=Dpto= " ";
			sig=ant=ini=fin=NULL;
		}
		
		void Lee()
		{
			cout<<"\nNo. de Empleado: "; cin>>No_emp;
			cout<<"\nNombre: "; fflush(stdin); getline(cin, Nom);
			cout<<"\nDepartamento: "; fflush(stdin); getline(cin,Dpto);
			cout<<"\nCalificacion de Cursos: "; cin>>Prom;
		}
		
		void Inserta()
		{
			N_nod++;
			Nodo *nuevo=new Nodo;
			nuevo->Lee();
			if(ini==NULL){
				ini=fin=nuevo;
				nuevo->sig=nuevo->ant=nuevo;
			}
			else{
				nuevo->sig=ini;
				nuevo->ant=fin;
				fin->sig=nuevo;
				ini->ant=nuevo;
				ini=nuevo;
			}
		}
		
		void Desviacion()
		{
			float med=0.0,var=0.0;
			
			Nodo *ind=ini;
			do{
				med+=ind->Prom;
				ind=ind->sig;
			}while(ind != ini);
			med/=N_nod;
			
			ind=ini;
			do{
				var+=pow((ind->Prom - med),2);
				ind=ind->sig;
			}while(ind != ini);
			var/=N_nod;
			desv=sqrt(var);
		}
		
		void Imp()
		{
			cout<<endl<<left
				<<setw(7)<<No_emp
				<<setw(25)<<Nom
				<<setw(5)<<Prom
				<<setw(15)<<Dpto;
		}
		
		void Muestra()
		{
			if(ini==NULL)
				cout<<"\nLista Vacia\n";
			else{
				cout<<"\nEmpleados de la Empresa\n";
				Nodo *ind=ini;
				do{
					ind->Imp();
					ind=ind->sig;
				}while(ind != ini);
			}
			cout<<"\nLa desviacion Estandar de las calificaciones del curso es: "<<desv<<endl;
			if(desv<1.5)
				cout<<"\nLa empresa DEBE reforzar los cursos de capacitacion"<<endl;
			else
				cout<<"\nLa empresa NO DEBE reforzar los cursos de capacitacion :)"<<endl;
		}
		
		void Captura()
		{
			char rep;
			do{
				system("cls");
				cout<<"Ingresa los datos\n";
				Inserta();
				cout<<"Otro Empleado (S/N): ";
				cin>>rep;
			}while(rep == 's' || rep == 'S');
		}
	
		~Nodo()
		{
			Nodo *ind;
			fin->sig=ini->ant=NULL;
			while(ini)
			{
				ind=ini;
				ini=ini->sig;
				delete ind;
			}
			ini=fin=NULL;
		}
	
};

int main()
{
	Nodo N;
	N.Captura();
	N.Desviacion();
	N.Muestra();
	return 0;
}
