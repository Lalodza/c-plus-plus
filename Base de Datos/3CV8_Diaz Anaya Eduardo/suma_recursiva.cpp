/*
	Name: Suma
	Copyright: IPN
	Author: Diaz Anaya Eduardo / 2020300206
	Date: 15/06/21 20:13
	Description: Programa de suma acumulada utilizando el metodo de recursividad
*/

#include<iostream>
using namespace std;

class Suma
{
	private:
		int n;
	public:
		Suma()
		{
			n=0;	
		}
		
		void Lee()
		{
			do{
				cout<<"\nHasta que numero quieres la suma: ";
				cin>>n;
			}while(n<=0);	
		}	
		
		void Calcular()
		{
			cout<<"\nLa suma recursiva desde 1 hasta "<<n<<"= "<<sum(n)<<endl;

		}
	
		long double sum(int num)
		{
			if(num==1)
				return 1;
			else 
				return num + sum(num-1;);
		}
		
		~Suma()
		{
			cout<<"\nFIN DEL PROGRAMA...\n";
			system("pause");
		}
};

int main()
{
	Suma S;
	char aux;
	do{
		S.Lee();
		S.Calcular();
		cout<<"\nOtra suma (S/N): ";
		cin>>aux;
	}while(aux != 'n' || aux!= 'N');
}
