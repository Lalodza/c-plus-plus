/*
	Name: Fibonacci 
	Copyright: IPN
	Author: Diaz Anaya Eduardo / 2020300206
	Date: 15/06/21 20:13
	Description: programa de fibonacci pero con recursividad
*/

#include<iostream>
using namespace std;

class Fibo
{
	private:
		int n,m;
	
	public:
		Fibo()
		{
			n=m=0;
		}
		
		void Lee()
		{
			cout<<"\nHasta que numero se hace el Fibonacci: ";
			cin>>m;	
		}
		
		void Imp()
		{
			for(int i=0;i<0;i++)
				cout<<Fibonacci(i)<<", ";
		}
		
		long double Fibonacci(int n)
		{
			if(n==0 || n==1)
				return n;
			else 
				return Fibonacci(n-1) + Fibonacci(n-2);
		}
		
		void Rep()
		{
			char rep;
			do{
				system("cls");
				cout<<"\tFIBONACCI\n";
				Lee();
				Imp();
				long double Fibonacci(n);
				cout<<"\nDesea ingresar otro dato: (S/N)";
				cin>>rep;
			}while(rep=='s' || rep=='S');
		}
		
		~Fibo()
		{
			cout<<"\nFIN DEL PROGRAMA\n";
			system("pause");
		}
	
};

int main()
{
	Fibo F;
	F.Rep();
	return 0;
}
