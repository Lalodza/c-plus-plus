#include<iostream>
#include<stdlib.h>

using namespace std;

/*
int main(){
	int numero;
	
	do{
		cout<<"Digite un numero del 1 al 10: "; cin>>numero;
	}while((numero<1) || (numero>10));
	
	for (int i=1;i<=20;i++){
		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
	}
	cout<<"\n\n";
	system("pause");
	return 0;
}
*/


int main(){
	int num,i;
	 do{
	 	cout<<"Digite un numero: "; cin>>num;
	 	if(num!=0){
	 		i++;
		 }
	 
	 	
	 }while(num!=0);
	 system("cls");
	 cout<<"\nEl numero de numeros diferentes a cero son: "<<i<<endl<<endl;
	 system("pause");
	 return 0;
}

