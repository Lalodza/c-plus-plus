//Alumno: Diaz Anaya Eduardo
//Boleta: 2020300206
#include<iostream>
#include<conio.h>

void primo (int matriz[100], int matrizPrimo[100]);
 
using namespace std;
int main(){
	int n;
	int matriz[100];
	int matrizPrimo[100];

	cout<<"\t\t*********************************************"<<endl; 
	cout<<"\t\tNUMEROS PRIMOS EN UN ARREGLO\n"<<endl;
	cout<<"\tDe cuantos valores quieres el arreglo? \n";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"["<<i+1<<"]"<<" Ingrese numero: ";
		cin>>matriz[i];	
	}
	system("cls");
	cout<<"\t Los valores del arreglo son: \n";
	for(int i=0;i<n;i++){
		cout<<"\n["<<i+1<<"]-> "<<matriz[i];	
	}
	
	primo(matriz, matrizPrimo);
	 
 	getch();
 	return 0;
}

void primo (int matriz[100], int matrizPrimo[100]){
	int cont=0;
	for(int i=0;i<n;i++){
		if (matriz[i] % i == 0 ){
			cont++;
		}
	if (cont==2){
		matrizPrimo[i]=matriz[i];
	}	
	}
	
}
