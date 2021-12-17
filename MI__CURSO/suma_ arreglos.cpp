#include <iostream>
#include <conio.h>
using namespace std;
/*
int main(){
	char array1[]={'a','b','c','d','e'};
	char array2[]={'f','g','h','i','j'};
	char arraySuma[10];
	
	for(int i=0;i<5;i++){
		arraySuma[i] = array1[i];
	}
	for(int i=5;i<10;i++){
		arraySuma[i] = array2[i-5];
	}
	system("cls");
	for(int i=0;i<10;i++){
		cout<<arraySuma[i]<<"  ";
	}
	
	getch();
	return 0;
}
*/

int main(){
	int array1[5];
	int array2[5];
	
	for(int i=0;i<5;i++){
		cout<<i+1<<". Digite un numero: ";cin>>array1[i];
	}
	for(int i=0;i<5;i++){
		array2[i] = array1[i] * 2;
	}
	system("cls");
	cout<<"Los numeros multiplicados son los siguientes: "<<endl;
	for(int i=0;i<5;i++){
		cout<<i+1<<". "<<array2[i]<<endl;
	}
	
	
	getch();
	return 0;
}
