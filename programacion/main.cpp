#include <iostream>
using namespace std;
int main() 
{
int N1=0;
int N2=0;
int N3=0;

cout<<"Dame 3 numeros, porfa bro ;)"<<endl;
cin>>N1>>N2>>N3;
////////////////////////////////////////////////////////////////////////////////////7
cout<<"Los numeros que me diste son:  "<<endl<<endl<<endl;
cout<<N1<<endl<<N2<<endl<<N3<<endl;
/////////////////////////////////////////////////////////////////////////////////
if((N1>N2)&&(N1>N3))
{
	cout<<endl<<"El 1er numero es mayor"<<endl<<endl;
}
/////////////////////////////////////////////////////////////////////////77
if((N2>N1)&&(N2>N3))
{
	cout<<endl<<"El 2do numero es mayor"<<endl<<endl;
}
/////////////////////////////////////////////////////////////////////////////
if((N3>N2)&&(N3>N1))
{
	cout<<endl<<"El 3er numero es mayor"<<endl<<endl;
}
/////////////////////////////////////////////////////////////////////////////////777
if((N1==N2)&&(N1==N3)&&(N2==N3))
{
	cout<<endl<<"Todos los numeros son iguales bro"<<endl<<endl;
}
/////////////////////////////////////////////////////////////////////////////////////////
system ("pause");
	return 0;
}