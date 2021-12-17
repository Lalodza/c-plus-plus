/*
	Name: RESERVA DINAMICA DE MEMORIA PARA UNA CADENA 
	Copyright: IPN
	Author: Diaz Anaya Eduardo
	Date: 02/03/21 18:50
	Description: Estructura de una cadena con memoria dinamicav
*/

#include <iostream>
#include <cstring>
using namespace std;

class Cadena{
	private:
		char *cad;
	public:
		Cadena ()//Constructor
		{
			cad = new char[1];
			strcpy(cad," ");
		}
		//Definicion (online) porque esta adentro de la clase
		void Leer()
		{
			char aux[100];
			cout << "Dame una cadena: "; 
			cin.getline(aux,100);
			
			//Reserva dinamica de Memoria
			cad = new char[strlen(aux) +1];
			strcpy(cad,aux);
		}
		
		//Imprimir
		void Imp()
		{
			system("cls");
			cout <<"\nLa cadena leinda es: " <<cad<< endl;
		}
		~Cadena () //Destructor
		{
			if(cad)
				delete []cad;
			cout << "\nMemoria liberada\n \nFIN DEL PROGRAMA\n";
			system ("pause");
		}
};


int main(){
	Cadena c;
	c.Leer();
	c.Imp();
	return 0;
}
