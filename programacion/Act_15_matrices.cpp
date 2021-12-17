//Alumno: Diaz Anaya Eduardo
//Boleta: 2020300206
#include<iostream>
#include<conio.h>

void suma(int matriz1[][10], int matriz2[][10], int matrizSuma[][10]);
void resta(int matriz1[][10], int matriz2[][10], int matrizResta[][10]);
void imprimir(int matrizSuma[][10], int matrizResta[][10]);

using namespace std;
int main(){
	
 int matriz1[10][10], matriz2[10][10];
 int matrizSuma[10][10], matrizResta[10][10];
  
 cout<<"\t\t*********************************************"<<endl; 
 cout<<"\t\tSuma y Resta de Matricez de 5 x 5"<<endl;
 
 cout<<"Llenado de matriz 1"<<endl;
 for(int i=0;i<5;i++){
  for(int j=0;j<5;j++){
   cout<<"["<<i+1<<"]"<<" ["<<j+1<<"]"<<" Ingrese numero: ";
   cin>>matriz1[i][j];
  }
 }
 cout<<"\n*****************"<<endl;
 cout<<"Llenado de matriz 2"<<endl;
 for(int i=0;i<5;i++){
  for(int j=0;j<5;j++){
   cout<<"["<<i+1<<"]"<<" ["<<j+1<<"]"<<" Ingrese numero: ";
   cin>>matriz2[i][j];
  }
 }
 system("cls");
 cout<<"\n\tLa matriz 1 es: "<<endl;
  for(int i=0;i<5;i++){
  	for(int j=0;j<5;j++){
   cout<<matriz1[i][j]<<" "; 
  }
  cout<<endl;
 }
 
  cout<<"\n\tLa matriz 2 es: "<<endl;
  for(int i=0;i<5;i++){
  	for(int j=0;j<5;j++){
   cout<<matriz2[i][j]<<" "; 
  }
  cout<<endl;
 }
 
 suma (matriz1, matriz2, matrizSuma);
 resta (matriz1, matriz2, matrizResta);
 imprimir (matrizSuma, matrizResta);
 getch();
 return 0; 
}


void suma (int matriz1[10][10], int matriz2[10][10], int matrizSuma[10][10]){
	 
 for(int i=0;i<5;i++){
  for(int j=0;j<5;j++){
   matrizSuma[i][j]=matriz1[i][j]+matriz2[i][j];
  }
 }
}

void resta (int matriz1[10][10], int matriz2[10][10], int matrizResta[10][10]){
	 
 for(int i=0;i<5;i++){
  for(int j=0;j<5;j++){
   matrizResta[i][j]=matriz1[i][j]-matriz2[i][j];
  }
 }
}

void imprimir (int matrizSuma[10][10], int matrizResta[10][10]){
	 cout<<"\n\t La suma de las dos matrices es:"<<endl;
 for(int i=0;i<5;i++){
  for(int j=0;j<5;j++){
   cout<<matrizSuma[i][j]<<" ";
  }
  cout<<endl;
 }
 
 cout<<"\n\t La resta de las dos matrices es:"<<endl;
 for(int i=0;i<5;i++){
  for(int j=0;j<5;j++){
   cout<<matrizResta[i][j]<<" ";
  }
  cout<<endl;
 }
 
}

