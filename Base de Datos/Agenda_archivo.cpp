/*
	Name: Agenda
	Copyright: IPN
	Author: Diaz Anaya Eduardo / 2020300206
	Date: 15/06/21 20:13
	Description: Programa que guarda datos de una agenda solo que utiizando archivos
*/

#include<fstream>
#include<iostream>
#include<windows.h>
#include<Clocale>
#include<string.h>
using namespace std;

class Agenda
{
	private:
		string Nom, Dir, Tel, Email, CURP, Nacim,dat;
		int opc1, opc2, a, b;
		ofstream Escribe;
		ifstream Leer;
	public:
		Agenda()
		{
			Nom=Dir=Tel=Email=CURP=Nacim=dat= " ";	
			opc1=opc2=a=b=0;
		}	
	
		void Lee()
		{
			Escribe.open("agenda_archivos.txt",ios::out);
			if(!Escribe){
				cerr<<"\nNO SE PUEDE CREAR EL ARCHIVO\n";
				system("pause");
				exit(0);
			}else{
				cout<<"\nDame el Nombre: ";fflush(stdin); getline(cin, Nom);Conv(Nom);
				cout<<"\nDame la Direccion: ";fflush(stdin); getline(cin, Dir);Conv(Dir);
				cout<<"\nDame el Telefono: ";fflush(stdin); getline(cin, Tel);
				cout<<"\nDame el Email: ";fflush(stdin); getline(cin, Email);
				cout<<"\nDame el CURP: ";fflush(stdin); getline(cin, CURP);Conv(CURP);
				cout<<"\nDame la Fecha de Nacimiento: ";fflush(stdin); getline(cin, Nacim);
			}
			Escribe.close();
		}
		
		
		void Imp()
		{	
			Leer.open("agenda_archivos.txt",ios::in);
			if(!Leer){
				cerr<<"\NO SE PUEDE LEER EL ARCHIVO\n";
				system("pause");
				exit(1);
			}
			else{
				
				system("cls");
				cout<<"\nDatos del archivo...\n";
				cout<<"\nREGISTRO DE CONTACTOS\n";
				while(!Leer.eof()){
					Leer>>Nom>>Tel>>Dir>>Email>>CURP>>Nacim;
					cout<<"\n\nNombre:  \t"<<Nom
						<<"\nTelefono:  \t"<<Tel
						<<"\nDireccion: \t"<<Dir
						<<"\nEmail:     \t"<<Email
						<<"\nCURP:      \t"<<CURP		
						<<"\nFecha de Nacimiento:   "<<Nacim<<endl;
				}
			}
			Leer.close();
		}	
		
		void Conv(string &dato)
		{
			for(int i=0;i<dato.length();i++){
				dato[i]=toupper(dato[i]);
			}
		}
		
		bool BuscaNom(string dato)
		{
			if(dato==Nom)
			{
				cout<<"\nBusqueda Exitosa!!\n";
				Imp();
				return true;
			}
			else return false;
		}
		
		bool BuscaTel(string dato)
		{
			if(dato==Tel)
			{
				cout<<"\nBusqueda Exitosa!!\n";
				Imp();
				return true;
			}
			else return false;
		}
		
		bool BuscaDir(string dato)
		{
			if(dato==Dir)
			{
				cout<<"\nBusqueda Exitosa!!\n";
				Imp();
				return true;
			}
			else return false;
		}
		
		bool BuscaEmail(string dato)
		{
			if(dato==Email)
			{
				cout<<"\nBusqueda Exitosa!!\n";
				Imp();
				return true;
			}
			else return false;
		}
		
		bool BuscaCURP(string dato)
		{
			if(dato==CURP)
			{
				cout<<"\nBusqueda Exitosa!!\n";
				Imp();
				return true;
			}
			else return false;
		}
		
		bool BuscaNac(string dato)
		{
			if(dato==Nacim)
			{
				cout<<"\nBusqueda Exitosa!!\n";
				Imp();
				return true;
			}
			else return false;
		}
		
};

int main()
{
	setlocale(LC_ALL, "SPANISH");
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	
	Agenda *A;
	int n,x;
	int opc2=0,opc1=0,a=0;
	string dat= " ";
	bool band=false;
	
	do{
	cout<<"\n**MENU**\n\n";
	cout<<"opciones: \n";
	cout<<"1.- Introducir"<<endl
		<<"2.- Mostrar"<<endl
		<<"3.- Buscar"<<endl
		<<"4.- SALIR..."<<endl;
	cin>>opc1;
		switch(opc1)
		{
			case 1:
				cout<<"INTRODUCIR\n";
				cout<<"¿Cuantos contactos vas a registrar?: ";
				cin>>n;
				A= new Agenda[n];
				cout<<"\nIntroduce los "<<n<<" contactos...\n";
					for(int i=0;i<n;i++){
						(A+i)->Lee();
					system("cls");
				}
			break;
			case 2:
				cout<<"MOSTRAR\n";
				cout<<"\nContactos Introducidos... \n";
					for(int i=0;i<n;i++){
						(A+i)->Imp();
				}
			break;
			case 3:
				cout<<"\n**MENU BUSCAR**\n"
					<<"1.- Nombre"<<endl
					<<"2.- Telefono"<<endl
					<<"3.- Direccion"<<endl
					<<"4.- Email"<<endl
					<<"5.- CURP"<<endl
					<<"6.- Fecha de Nacimiento"<<endl;
				cin>>opc2;
				
				switch(opc2)
				{
					case 1:
						cout<<"Nombre a buscar: ";
						getline(cin, dat);
						for(int c=0;c<n;c++)
							band=(A+c)->BuscaNom(dat);
						if(band==false)
							cout<<"\nDato no encontrado\n";
					break;
					case 2:
						cout<<"Telefono a buscar: ";
						getline(cin, dat);
						for(int c=0;c<n;c++)
							band=(A+c)->BuscaTel(dat);
						if(band==false)
							cout<<"\nDato no encontrado\n";
					
					break;
					case 3:
						cout<<"Direccion a buscar: ";
						getline(cin, dat);
						for(int c=0;c<n;c++)
							band=(A+c)->BuscaDir(dat);
						if(band==false)
							cout<<"\nDato no encontrado\n";
						
					break;
					case 4:
						cout<<"Email a buscar: ";
						getline(cin, dat);
						for(int c=0;c<n;c++)
							band=(A+c)->BuscaEmail(dat);
						if(band==false)
							cout<<"\nDato no encontrado\n";
					
					break;
					case 5:
						cout<<"CURP a buscar: ";
						getline(cin, dat);
						for(int c=0;c<n;c++)
							band=(A+c)->BuscaCURP(dat);
						if(band==false)
							cout<<"\nDato no encontrado\n";
					
					break;
					case 6:
						cout<<"Fecha de Nacimiento a buscar: ";
						getline(cin, dat);
						for(int c=0;c<n;c++)
							band=(A+c)->BuscaNac(dat);
						if(band==false)
							cout<<"\nDato no encontrado\n";
						
					break;
				}
			break;
			
			default:
				cout<<"¿Seguro que quieres salir?...\n";
		}
	}while(opc1==4);
	
	if(A) delete[]A;
	return 0;
}
