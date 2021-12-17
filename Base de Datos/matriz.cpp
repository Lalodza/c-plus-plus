/*
	Name: MATRIZ
	Copyright: IPN
	Author: Diaz Anaya Eduardo
	Date: 02/03/21 18:50
	Description: Estructura de una matriz con memoria dinamicav
*/

#include <iostream>
using namespace std;

class Matriz
{
	private:
		int ren, col;
		float **Mat,*Prom;
		
	public:
		Matriz()
		{
			ren= col=0;
			Mat= new float*[1];
			*Mat=new float[1];
			**Mat=0.0;
			Prom= new float[1];
			*Prom=0.0;
		}
		
		void Lee()
		{
			cout<<"\nDame el numero de Renglones: ";
			cin>>ren;
			cout<<"\nDame el numero de columnas: ";
			cin>>col;
			
			Mat=new float*[ren];
			cout<<"\nLlena la Matriz"<<endl;
			for(int r=0;r<ren;r++){
				*(Mat+r)= new float[col];
				for(int c=0;c<col;c++){
					cout<<"Dato ["<<r+1<<"] ["<<c+1<<"]: ";
					cin>>*(*(Mat+r)+c);
				}
			}	
		}
		
		void Promedio()
		{
			Prom=new float[ren];
			for(int r=0;r<ren;r++){
				*(Prom+r)=0.0;
				for(int c=0;c<col;c++){
					*(Prom+r)+= *(*(Mat+r)+c); //meti llaves en el segundo for
				*(Prom+r)/=col;
				}
			}
		}
		
		void Imp()
		{
			system("cls");
			cout<<"\nDatos de la matriz \tPromedio\n";
			for(int r=0;r<ren;r++){
				for(int c=0;c<col;c++){
					cout<<*(*(Mat+r)+c)<<'\t';
				cout<<'\t'<<"\t"<<*(Prom+r)<<endl;
				}
			}
		}
		
		~Matriz()
		{
			for(int r=0;r<ren;r++)
				delete *(Mat+r);
			delete []Mat;
			if(Prom) delete []Prom;
			cout<<"\nMemoria liberada\nFIN DEL PROGRAMA\n\n";
			system("pause");
		}
};

int main(){
	
	setlocale(LC_ALL,"SPANISH");
	Matriz M;
	M.Lee();
	M.Promedio();
	M.Imp();
	return 0;
}
