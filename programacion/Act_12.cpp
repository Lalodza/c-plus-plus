//ALUMNO: Diaz Anaya Eduardo
//BOLETA: 2020300206
#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos(int vector1[], int vector2[]);
void sumaVectores(int vector1[], int vector2[], int res[]);
void imprimir(int res[]);

int main (){
	int vector1 [5];
	int vector2 [5];
	int res[5];
	
	pedirDatos(vector1,vector2);
	system("cls");
	sumaVectores(vector1,vector2,res);
	imprimir(res);
	
	getch();
	return 0;
}

void pedirDatos (int vec1[], int vec2[]){
	cout<<"Dame los numeros a almacenar en el VECTOR 1 \n";
	for(int i=1;i<6;i++){
		cout<<i<<".- Digite un numero: ";
		cin>>vec1[i];
	}
	
	cout<<"\nDame los numeros a almacenar en el VECTOR 2 \n";
	for(int i=1;i<6;i++){
		cout<<i<<".- Digite un numero: ";
		cin>>vec2[i];
	}
}

void sumaVectores (int vec1[], int vec2[], int resultado[]){
	
	for(int i=1;i<6;i++){
		resultado[i] = vec1[i] + vec2[i];
		cout<<"Vamos a sumar: "<<vec1[i]<<" + "<<vec2[i]<<endl;
	}
}

void imprimir (int resultado[]){
	cout<<"\t\t\n La suma de los vectores es: \n";
	for(int i=1;i<6;i++)
	cout<<"La suma de la Linea "<<i<<" es: "<<resultado[i]<<endl;
}
