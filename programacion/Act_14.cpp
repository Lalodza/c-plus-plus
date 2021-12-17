using namespace std;
#include<iostream>
void leer(char X[5]);
void Cambio(char X[5], char Y[5]);
void imprimir(char R[5]);
int main(){
	char A[5];
	char B[5];
	char C[5];
	
	cout<<"Dame los valores del vector A \n";
	leer(A);

	Cambio(A,B);
	cout<<"Los valores del vector A son: ";
	imprimir(A);
	cout<<"\n";
	cout<<"Los valores del vector B son: ";
	imprimir(B);
	
	cout<<"\n";
}
void leer(char X[5]){
	for(int i=0; i<5; i++){
		cout<<"Dame el dato ["<<i+1<<"]"<<endl;
		cin>>X[i];
	}
}
void Cambio(char X[5], char Y[5]){
	for(int i=0; i<5; i++){
		Y[5-i]=X[i];
	}
}
void imprimir(char R[5]){
	for(int i=0; i<5; i++){
		cout<<R[i];
	}
}
