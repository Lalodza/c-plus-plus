//PASO POR REFERENCIA suma de dos numeros

#include<iostream>
#include<conio.h>
using namespace std;

void SumaNum(int&,int&,int&);
void ImprimirRes(int,int,int);

int main(){
	int num1,num2,suma;
	cout<<"\tVamos a sumar 2 numeros \n";
	cout<<"\nDame el valor del Primer numero a sumar: ";
 	cin>>num1;
 	cout<<"\nDame el valor del Segundo numero a sumar: ";
 	cin>>num2;
 	system ("cls");
 	SumaNum(num1,num2,suma);
	ImprimirRes(num1,num2,suma); 	
 	
 	getch();
 	return 0;
}

void SumaNum (int& num1, int& num2, int& suma){
	suma=num1+num2;
	cout<<"\nLos numeros que vamos a sumar son:   "<<num1<<" + "<<num2;
	cout<<endl;
}

void ImprimirRes (int num1, int num2, int res){
	cout<<"\n\tEl resultado de la suma es:  "<<res<<endl;
}
