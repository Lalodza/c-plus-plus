#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
	char palabra[]="Lalo";
	char palabra2[]={'L','a','l','o'};
	char nombre[30];
	
	//cout<<palabra<<endl;
	//cout<<palabra2<<endl;
	cout<<"Digite su nombre: ";
	cin.getline(nombre,20,'\n');
	
	cout<<nombre;
	
	getch();
	return 0;
}


