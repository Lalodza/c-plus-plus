/*
	Name: Factorial
	Copyright: IPN
	Author: Diaz Anaya Eduardo / 2020300206
	Date: 15/06/21 20:13
	Description: Se calcula el factorial de un numero aplicando recursividad
*/

#include<iostream>
using namespace std;

class Fact
{
	private:
		int n;
	public:
		Fact()
		{
			n=0;	
		}
		
		void Lee()
		{
			cout<<"\nIngrese numero a calcular el factorial: ";
			cin>>n;	
		}
		
		void Imp()
		{
			cout<<"\n"<<n<<"!= "<<Factorial(n)<<endl;	
		}
		
		long double Factorial(int num)
		{
			long double F=1.0;
			for(int i=num;i>1;i--)
				F*=i;
			return F;	
		}	
		
		void Rep()
		{
			char rep;
			do{
				system("cls");
				cout<<"\tFACTORIAL\n";
				Lee();
				Imp();
				cout<<"\nDesea ingresar otro dato: (S/N)";
				cin>>rep;
			}while(rep=='s' || rep=='S');
		}
		
		~Fact()
		{
			cout<<"\nFIN DEL PROGRAMA\n";
			system("pause");
		}
};

int main()
{
	Fact F;
	F.Rep();
	return 0;
}
