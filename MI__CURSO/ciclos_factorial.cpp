#include <iostream>
#include <conio.h>

using namespace std;

/*
int main(){
	int numero=0, factorial=1, suma=0;
	
	cout<<"Digite un numero: "<<endl;	cin>>numero;
	
	for (int i=1;i<=numero;i++){
		factorial *=  i;
		suma += factorial;
	}
	
	cout<<"El factorial del numero es: "<<suma;
	
	getch();
	return 0;
}
*/

int main(){
	int numero, fact=1, aux=1, suma=0;
	
	cout<<"Digite un numero: ";cin>>numero;
	
	for (int i=1;i<=numero;i++){
		for (int f=1;f<=i;f++){
			fact*=f;
			cout<<f<<endl;
		}
		suma=suma + fact;
	}
cout<<"\nLa suma de los factoriales es: "<<suma;		


getch();
return 0;  
}

