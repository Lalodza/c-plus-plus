//Alumno: Diaz Anaya Eduardo
//Boleta: 2020300206
#include<iostream>
#include<conio.h>
#include <ctype.h>

using namespace std;
void validar (int asientos[8][20], int fila, int columna);
void imprimir (int asientos[8][20]);

int main(){
	int asientos[8][20] = {0};
	int c=1, fila, columna;
	char s=65,a,f;
	
	
	cout<<"\t\t**Bienvenidos a CINE ESIME**\n";
	cout<<"Los lugares disponibles para la Funcion ELECTRCIDAD son: \n"<<endl;
	cout<<"\n\t\t\t\t SALA 3 \n"<<endl;
	cout<<"     1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19 20\n";
	cout<<"     ____________________________________________________________"<<endl;
    	for(int i=0;i<8;i++){	    		
    		a=s+i;
			cout<<a<<" -> ";
  			for(int j=0;j<20;j++){
   			cout<<asientos[i][j]<<"  "; 
  			}
  		cout<<" <- "<<a<<endl;
 		}
 	cout<<"     ____________________________________________________________"<<endl;
 	cout<<"     1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19 20\n";
 	cout<<"\n Elige que lugra quieres "<<endl;
	cout<<"Fila(A-H): \n";
	cin>>f;
	f=toupper(f);
	cout<<"columna(1-20); \n";
	cin>>columna;
	system("cls");
	cout<<"******************************************************";
 	cout<<"\n\tLos lugares que escogiste son: \n";
 	cout<<"   FILA: "<<f;
 	fila=f-65;
 	cout<<"\nCOLUMNA: "<<columna<<endl;
	validar(asientos, fila, columna);
	
		
	getch();
	return 0;	
}

void validar(int asientos[8][20], int fila, int columna){
		if (asientos[fila][columna-1] == 0){
			asientos[fila][columna-1] = 1;
			cout<<"\tReserva !EXITOSA! ";
		}else
			cout<<"\tAsiento OCUPADO :("<<endl;
			cout<<"\n Presiona enter para ver los nuevos lugares disponibles"<<endl;
	getch();
	
	char s=65, a;
	cout<<"\n\t\t\t\t SALA 3 \n"<<endl;
	cout<<"     1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19 20\n";
	cout<<"     ____________________________________________________________"<<endl;
    	for(int i=0;i<8;i++){	    		
    		a=s+i;
			cout<<a<<" -> ";
  			for(int j=0;j<20;j++){
   			cout<<asientos[i][j]<<"  "; 
  			}
  		cout<<" <- "<<a<<endl;
 		}
 	cout<<"     ____________________________________________________________"<<endl;
 	cout<<"     1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19 20\n";	
	}
	


