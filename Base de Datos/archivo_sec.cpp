/*
	Name: Archivos
	Copyright: IPN
	Author: Diaz Anaya Eduardo / 2020300206
	Date: 15/06/21 20:13
	Description:  Metodo de archivos
*/

#include<iostream>
#include<fstream>
using namespace std;

class Clientes
{
	private:
		int NoCta;
		string Pat,Mat,Nom;
		float Saldo;
		ofstream Escribe;
		ifstream Lee;
		
	public:
		Clientes()
		{
			NoCta=0;
			Pat=Mat=Nom=" ";
			Saldo=0.0;
		}	
		
		void Salida()
		{
			Escribe.open("datos.txt",ios::out);
			if(!Escribe){
				cerr<<"\nNO SE PUEDE CREAR EL ARCHIVO\n";
				system("pause");
				exit(0);
			}
			else{
				char otro;
				cout<<"\nIntroduce los registros";
				do{
					cout<<"Numero de cuenta: ";cin>>NoCta;
					cout<<"Saldo: ";cin>>Saldo;
					cout<<"Apellido Paterno: ";fflush(stdin);getline(cin,Pat);
					cout<<"Apellido Materno: ";fflush(stdin);getline(cin,Mat);
					cout<<"Nombre: ";fflush(stdin);getline(cin,Nom);
					Escribe<<NoCta<<"\t"<<Saldo<<"\t"<<Pat<<" "<<Mat<<" "<<Nom<<endl;
					cout<<"\nOtro registro? (S/N)";cin>>otro;
				}while(otro=='s' || otro=='S');
			}
			Escribe.close();
		}
		
		void Entrada()
		{
			Lee.open("datos.txt",ios::in);
			if(!Lee){
				cerr<<"\NO SE PUEDE LEER EL ARCHIVO\n";
				system("pause");
				exit(1);
			}
			else{
				system("cls");
				cout<<"\nDatos del archivo...\n";
				cout<<"CUENTA\tSALDO\tNOMBRE\n";
				while(!Lee.eof()){
					Lee>>NoCta>>Saldo>>Pat>>Mat>>Nom;
					cout<<NoCta<<"\t"<<Saldo<<"\t"<<Nom<<" "<<Pat<<" "<<Mat<<endl;
				}
			}
			Lee.close();
		}
		
		~Clientes()
		{
			cout<<"\n\nFIN DEL PROGRAMA\n\n";
			system("pause");
		}
	
};

int main()
{
	Clientes C;
	C.Salida();
	C.Entrada();
	return 0;
}
