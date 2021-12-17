#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
/*
int main(){
	int numeros[2][2]={{1,2},{3,4}};
	int matriz2[2][2];
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			matriz2[i][j] = numeros[i][j];
		}
	}
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<matriz2[i][j];
		}
	cout<<"\n";	
	}
	
	getch();
	return 0;
}
*/

int main(){
	int matriz1[50][50],matriz2[50][50],suma[50][50]={0},f,c,dato;
	
	cout<<"Dame el numero de filas: ";cin>>f;
	cout<<"\nDame el numero de columnas: ";cin>>c;	
	system("cls");
	srand(time(NULL));
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			dato=1+rand ()%(9);
			  matriz1[i][j]=dato;
		}
	}
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			dato=1+rand ()%(9);
			  matriz2[i][j]=dato;
		}
	}
	cout<<"**MATRIZ 1\n";
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cout<<matriz1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"**MATRIZ 2\n";
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cout<<matriz2[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\nAhora vamos a sumar los valores de la matriz\n";
	system("pause");
	cout<<"\n\n";
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			suma[i][j] = matriz1[i][j] + matriz2[i][j];
		}
	}
	cout<<"**SUMA\n";
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cout<<suma[i][j]<<" ";
		}
		cout<<endl;
	}
	
	getch();
	return 0;
}



