#include <iostream>
#include <conio.h>
using namespace std;
/*
int main(){
	int suma = 0, cuadrado;

	for(int i=1;i<=10;i++){
		cuadrado= i*i;
		suma += cuadrado;
		cout<<suma<<endl;
	}	
	
	cout<<"El resultado de la suma es: "<<suma<<endl;
	
	getch();
	return 0;
}
*/

int main(){
	int i=0;
	int temp, temp_a = 0, temp_b, temp_p, suma = 0;
	
	cout<<"\t**********El programa mostrara la temperatura mas alta, la mas baja y la media**********\n";
	cout<<"\nDijite la temperatura cada 4hrs\n";
	system("pause");
	system("cls");
	
	
	while(i<24){
		i=i+4;
		cout<<" Son las "<<i<<" hrs.\n";
		cout<<"Registra la Temperatura: ";cin>>temp;
		if (temp>temp_a){
			temp_a=temp;
		}
		else{
			temp_a=temp_a;
		}
		if(temp<temp_b){
			temp_b=temp;
		}
		else{
			temp_b=temp_b;
		}
		suma = suma+temp;
	}
	temp_p=suma/6;
	
	cout<<"La temperatura mas alta registrada es de: "<<temp_a<<endl;
	cout<<"La temperatura mas baja registrada es de: "<<temp_b<<endl;
	cout<<"La temperatura promedio es de: "<<temp_p<<endl;
	
	
	getch();
	return 0;
}

