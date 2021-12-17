#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	int numero, dato, contador=0;
	
	cout<<"\t **NUMERO MAGICO**\n";
	cout<<"Tienes que adivinar el numero aleatorio, suerte!...\n\n";
	system("pause");
	system("cls");
	srand(time(NULL)); //NUMERO ALEATORIO
	dato= 1 + rand()%(100);
	do{
		cout<<"Digite un numero: ";cin>>numero;
	
		if(numero>dato){
			cout<<"\nDigite un numero menor: \n";
		}
		if(numero<dato){
			cout<<"\nDigite un numero mayor: \n";
		}
		contador++;
	}while(numero != dato); 
	system("cls");
	cout<<"\n\t***************************\n";
	cout<<"\t* FELICIDADES ADIVINASTE  *\n";
	cout<<"\t***************************\n";
	cout<<"numero de intentos: "<<contador<<endl;
	
	system("pause");
	return 0;
}

