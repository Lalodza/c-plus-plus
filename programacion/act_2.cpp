#include <iostream>
#include <math.h>
void imprimir(int a,int b,int c, int m);

void imprimir(int a, int b, int c, int m){
	using namespace std;
		if (m==c)
		{
			cout<<"\nTu repuesta es CORRECTA!!!!\n";
		}
		else
	cout<<"\nTu respuesta es incorrecta :( \n La respuesta correcta es  "<<m<<endl;
	cout<<endl<<endl;
}

int main()  {
	using namespace std;
	int a, b, c;	
	int may;
	cout<<"\tValidar Tablas de multiplicar\n\n";
	cout<<"Ingrese el primer numero a multiplicar\n";
		cin>>a;
	cout<<"Ingrese el segundo numero a multiplicar\n";
		cin>>b;
	cout<<"\nEl numero a multiplicar es:  "<<a<<" x "<<b<<endl;
	
	cout<<"Cual es el resutado de la multiplicaion "<<a<<" x "<<b<<endl;
	cin>>c;
	may=a*b;
	
	imprimir(a,b,c, may);
	system("paused");
	return 0;
}
