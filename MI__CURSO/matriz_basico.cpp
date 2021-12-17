#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int array[100][100];
	int f,c;
	
	cout<<"Dame el numero de filas que quieres en la matriz: ";cin>>f;
	cout<<"\nDame el numero de columnas que quieres en la matriz: ";cin>>c;
	
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cout<<"["<<i<<"]"<<"["<<j<<"]"<<" Digite un numero: ";cin>>array[i][j];
		}
	}
	system("cls");
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cout<<array[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}
