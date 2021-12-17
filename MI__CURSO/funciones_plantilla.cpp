//Funcion Plantilla
#include <iostream>
#include <conio.h>
using namespace std;

//Prototipo de funcion
template <class TIPOD>
void mostrarAbs(TIPOD numero);

int main(){
	int num1=-52;
	float num2=-3.1416;
	double num3=-152.356;	
	
	mostrarAbs(num1);
	mostrarAbs(num2);
	mostrarAbs(num3);
	
	getch();
	return 0;
}

template <class TIPOD>
void mostrarAbs(TIPOD numero){
	if(numero < 0){
		numero = numero * -1;
	}
	cout<<"El valor absoluto del numero es: "<<numero<<endl;
}
