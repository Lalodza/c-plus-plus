/*
	Name: EXAMNE 1ER PARCIAL
	Copyright: IPN
	Author: DIAZ ANAYA EDUARDO
	Date: 17/05/21 19:17
	Description: ...
*/

#include<iostream>
using namespace std;

class Matriz
{
	private:
		int tam, producto;
		float **Mat,**Copia;	
	
	public:
		Matriz()
		{
			tam=0;
			producto=1;
			Mat=new float*[1]; Copia=new float*[1];
			*Mat=new float[1]; *Copia=new float[1];
			**Mat=0.0;		   **Copia=0.0;
		}
		
		void Lee()
		{
			cout<<"Dame el tamaño de la matriz: ";
			cin>>tam;
			Mat=new float *[tam];
			for(int r=0;r<tam;r++)
				*(Mat+r)=new float[tam];
			cout<<"Llenado de matriz\n";
			for(int r=0;r<tam;r++)
				for(int c=0;c<tam;c++){
					cout<<r+1<<" "<<c+1<<"Dato";
					cin>>*(*(Mat+r)+c);
				}
		}
		
		void dia_principal()
		{
			int aux=0;
			for(int r=0;r<tam;r++){
				for(int c=0;c<tam;c++){
					if(r==c){
						aux=*(*(Mat+r)+c);
						producto=(aux*producto);
					}
				}
			}
		}
		
		void Trans()
		{
			Copia=new float *[tam];
			for(int r=0;r<tam;r++)
				*(Copia+r)=new float [tam];
			for(int r=0;r<tam;r++){
					for(int c=0;c<tam;c++){
					*(*(Copia+r)+c)=(producto) * (*(*(Mat+c)+r));
					}
			}
		}
		
		void Imp()
		{
			cout<<"La matriz leida es: \n\n";
				for(int r=0;r<tam;r++){
						for(int c=0;c<tam;c++){
							cout<<*(*(Mat+r)+c)<<'\t';
							cout<<endl;
						}
				}
			cout<<"El producto de la diagonal principal es: "
				<<producto<<endl;
			cout<<"\nLa diagonal traspuesta es: \n\n";
				for(int r=0;r<tam;r++){
						for(int c=0;c<tam;c++){
							cout<<*(*(Copia+r)+c)<<'\t';
							cout<<endl;
						}
				}
		}
		
		~Matriz()
		{
				for(int r=0;r<tam;r++){
					delete *(Mat+r);
					delete *(Copia+r);
					delete []Mat;
					delete []Copia;
				}
				cout<<"\nMemoria liberada\n\n";
				system("pause");
		}
	
};

int main()
{
	Matriz M;
	M.Lee();
	M.dia_principal();
	M.Trans();
	M.Imp();
}
