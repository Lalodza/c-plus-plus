//funciones ejercicio 6
#include<iostream>
#include<conio.h>
using namespace std;

template <class TIPOD>
TIPOD maximo(TIPOD d1,TIPOD d2,TIPOD d3);

int main(){
	float dato1=15.1321;
	float dato2=9.0012;
	float dato3=15.200;
	cout<<"El dato mayor es: "<<maximo(dato1,dato2,dato3)<<endl;

	getch();
	return 0;
}

template <class TIPOD>
TIPOD maximo(TIPOD d1,TIPOD d2,TIPOD d3){
	TIPOD max;
	
	if(d1>d2&&d1>d3){
		max=d1;
	}else if(d2>d1&&d2>d3){
		max=d2;
	}else{
		max=d3;
	}
	
	return max;
}

