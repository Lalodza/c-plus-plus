//Alumno: Diaz Anaya Eduardo
//Boleta: 2020300206
#include<iostream>
#include<conio.h>

void multiplicacion(int matriz1[10][5], int matriz2[10][5], int matrizMulti[10][5]);
void imprimir(int matrizMulti[10][5]);

using namespace std;
int main(){
 int matriz1[10][5], matriz2[10][5];
 int matrizMulti[10][5];
  
 cout<<"\t\t*********************************************"<<endl; 
 cout<<"\t\tMultiplicaion de Matricez de 10 x 5"<<endl;
 
 cout<<"Llenado de matriz 1"<<endl;
 for(int i=0;i<10;i++){
  for(int j=0;j<5;j++){
   cout<<"["<<i+1<<"]"<<" ["<<j+1<<"]"<<" Ingrese numero: ";
   cin>>matriz1[i][j];
  }
 }
 cout<<"\n*****************"<<endl;
 cout<<"Llenado de matriz 2"<<endl;
 for(int i=0;i<10;i++){
  for(int j=0;j<5;j++){
   cout<<"["<<i+1<<"]"<<" ["<<j+1<<"]"<<" Ingrese numero: ";
   cin>>matriz2[i][j];
  }
 }
 system("cls");
 cout<<"\n\tLa matriz 1 es: "<<endl;
  for(int i=0;i<10;i++){
  	for(int j=0;j<5;j++){
   cout<<matriz1[i][j]<<" "; 
  }
  cout<<endl;
 }
 
  cout<<"\n\tLa matriz 2 es: "<<endl;
  for(int i=0;i<10;i++){
  	for(int j=0;j<5;j++){
   cout<<matriz2[i][j]<<" "; 
  }
  cout<<endl;
 }
 
 multiplicacion (matriz1, matriz2, matrizMulti);
 imprimir (matrizMulti);
 getch();
 return 0; 
}


void multiplicacion (int matriz1[10][5], int matriz2[10][5], int matrizMulti[10][5]){
	 
 for(int i=0;i<10;i++){
  for(int j=0;j<5;j++){
   matrizMulti[i][j]=matriz1[i][j]*matriz2[i][j];
  }
 }
}

void imprimir (int matrizMulti[10][5]){
	 cout<<"\n\t La Multiplicacion de las dos matrices es:"<<endl;
 for(int i=0;i<10;i++){
  for(int j=0;j<5;j++){
   cout<<matrizMulti[i][j]<<" ";
  }
  cout<<endl;
 }
}

