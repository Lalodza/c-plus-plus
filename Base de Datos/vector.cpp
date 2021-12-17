/*
	Name: VECTOR
	Copyright: IPN
	Author: DIAZ ANAYA EDUARDO
	Date: 16/03/21 19:18
	Description: atravez de un vector calcula la estadistica de una muestra
*/


#include <iostream>
#include <Clocale>
#include <Cmath>
using namespace std;

class Estad
{
	private:
		int n;   //muestra
		float *Xi,media,mediana,moda,var,desv;
	
	public:
		Estand()
		{
			n=0;
			Xi=new float[1];
			*Xi=media=mediana=moda=var=desv=0.0;
		}
		
		void Lee()
		{
			cout<<"Dame el tamaño de la muestra: ";
			cin>>n;
			Xi=new float[n];
			cout<<"\nIntroduce los "<<n<<" datos\n";
			for(int d=0;d<n;d++){
				cout<<"Dato "<<d+1<<": ";
				cin>>*(Xi+d);
			}
		}
		
		void Media()
		{
			media=0.0;
			for(int d=0;d<n;d++)
				media+= *(Xi+d);
			media/=n;
		}
		
		void Ordena()
		{
			float aux;
			for(int i=0;i<n-1;i++)
				for(int j=i+1;j<n;j++)
					if(*(Xi+i)>*(Xi+j))
					{
						aux= *(Xi+i);
						*(Xi+i)=*(Xi+j);
						*(Xi+j)=aux;
					}
		}
		
		void Mediana()
		{
			if(n%2 !=0)  //impar
				mediana= *(Xi+n/2);
			else
				mediana= (*(Xi+n/2)+*(Xi+(n/2+1)))/2;
		}
		
		void Varianza()
		{
			var=0.0;
			for(int d=0;d<n;d++)
				var+=pow((*(Xi+d)-media), 2);
			if(n<=30) var/=(n-1);
			else var/=n;			
			desv= sqrt(var);
		}
		
		void Imp()
		{
			cout<<"\nDatos de la muestra: \n"<<endl;
			for(int d=0;d<n;d++)
				cout<<"*"<<*(Xi+d)<<"*"<<'\t';
			cout<<"\n\nMedia= "<<media
				<<"\nMediana= "<<mediana
				<<"\nModa= "<<moda
				<<"\nVarianza= "<<var
				<<"\nDesviacion Estandar="<<desv
				<<endl;
		}
		
		void Menu()
		{
			char cont;
			do{
				cout<<"**CALCULO DE ESTADISTICA DE UNA MUESTRA**"<<endl;
				Lee();
				Media();
				Ordena();
				Mediana();
				Varianza();
				system("cls");
				Imp();
				cout<<"\n\nContinuar... (S/N) ";
				cin>>cont;
			}while(cont== 's' || cont=='S');
		}
		
		~Estad()
		{
			if(Xi) delete []Xi;
			cout<<"\nMemoria Liberada\n\nFIN DEL PROGRAMA\n\n";
			system("pause");
		}
};

int main(){
	
	setlocale(LC_ALL, "SPANISH");
	Estad E;
	E.Menu();
	return 0;
}

