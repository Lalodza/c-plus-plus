#include <iostream>
#include <conio.h>
using namespace std;
//Diaz Anaya Eduardo 2020300206
//Aprendi mucho de las estructuras al igual que de las clases ademas al final tambien muchas funciones que al final desconocia al 100%, profe tambien no pude participar, porque en la misma hora tenia otra clase pero la verdad ponia mas atencion en su clase y me gusto mucho la pasion y el amor con el que nos enseña cosas nuevas. MUCHAS GRACIAS POR ESTAS CLASES PROFE.

class Complejo
	{
		private:
			float Real;
			float Imag;
		
		public:
			Complejo( float Rea = 1, float Ima = 1 );
			
			float Menu( void );
			
			void AsigReal( float Rea );
			void AsigImag( float Ima);
			
			float ObtReal( void );
			float ObtImag( void );
			
			void Leer( void );
			void ImprimirComplejo( void );
			void ImprimirResultado( Complejo &RefC1, Complejo &RefC2, char Signo );
			
			Complejo Sumar( Complejo &RefC2 );
			Complejo Restar( Complejo &RefC2 );
			Complejo Multiplicar( Complejo &RefC2 );
			Complejo Dividir(  Complejo &RefC2 );
			
			bool ValidarMen(  float Opc );
			bool ValidarReal( float Rea );
			bool ValidarImag( float Ima );
			
			~Complejo( );
						
};

Complejo::Complejo(float Rea, float Ima)
	{
		AsigReal( Rea );
		AsigImag( Ima );
	}
	
float Complejo::Menu( void )
	{
		float Opc;
		
		do
			{
				system( "cls");
				cout	<< "ALUMNO: Diaz Anaya Eduardo\nBOLETA: 2020300206\n\n\n\n";
				cout	<< "\t\t**********************************" << endl;
				cout 	<< "\t\t*CALCULADORA DE NUMEROS COMPLEJOS*" << endl;
				cout	<< "\t\t**********************************" << endl << endl;
				cout 	<< "\t\tELIJE UNA OPCION" << endl << endl

        				<< "\t1.- Suma de dos Numeros Complejos" << endl
        				<< "\t2.- Resta de dos Numeros Complejos" << endl
        				<< "\t3.- Multiplicacion de dos Numeros Complejos" << endl			
        				<< "\t4.- Division de dos Numeros Complejos" << endl
        				<< "\t5.- Terminar el programa" << endl << endl

        				<< "\tEscribe tu opcion: ";
        		
        		cin 	>> Opc;
        		cout 	<< endl;
			}while( ValidarMen( Opc ) == false );
			
		return Opc;
}

void Complejo::AsigReal( float Rea )
	{
		Real = Rea;
	}
	
void Complejo::AsigImag( float Ima )
	{
		Imag = Ima;
	}//
	
float Complejo::ObtReal(  )
	{
		return Real;
	}
	
float Complejo::ObtImag(  )
	{
		return Imag;
	}
	
void Complejo::Leer( void )
	{
		static float i = 1;

		
		cout 	<< "\t\tLECTURA DE NUMEROS COMPLEJOS " << i << endl << endl
        		<< "\tDame la parte real  	: ";
        cin     >> Real;		
        

				cout << "\tDame el la parte imaginaria	: ";
				cin  >> Imag; cout<<"i ";
			

		cout << endl;
		i++;
		
	}
	
void Complejo::ImprimirComplejo( void )
	{	
	cout << ObtReal( ) << "  ,  " << ObtImag(  ) << "i " ;
	
	}

void Complejo::ImprimirResultado( Complejo &RefC1, Complejo &RefC2,
								 char Signo )
	{
		RefC1.ImprimirComplejo( );
		cout << " " << Signo << " ";
		RefC2.ImprimirComplejo( );
		cout << " = ";
		ImprimirComplejo( );	
			
		cout << endl << endl;
	}
	
Complejo Complejo::Sumar( Complejo &RefC2 )
	{
		Complejo Res;	
		Res.Real 	=  Real + RefC2.Real ;
		Res.Imag    =  Imag + RefC2.Imag;
						
		return Res;	
	}
	
Complejo Complejo::Restar( Complejo &RefC2 )
	{
		Complejo Res;	
		Res.Real 	= ( Real - RefC2.Real );
		Res.Imag    = ( Imag - RefC2.Imag);
						
		return Res;
	}
	
Complejo Complejo::Multiplicar( Complejo &RefC2 )
	{
		Complejo Res;
		Res.Real 	= ( Real * RefC2.Real ) + (( Imag * RefC2.Imag ) * ( -1 ));
		Res.Imag    = (Real * RefC2.Imag) + (Imag * RefC2.Real) ;

		return Res;
	}
	
Complejo Complejo::Dividir (Complejo &RefC2)
	{
		Complejo Res;	
		if( ValidarReal(RefC2.Real) && (ValidarImag(RefC2.Imag)) == false ) ;
		else
			{
			Res.Real = ((Real * RefC2.Real) + (Imag * RefC2.Imag)) /
						((RefC2.Real * RefC2.Real) + (RefC2.Imag * RefC2.Imag));
			Res.Imag = ((Imag * RefC2.Real) - (Real * RefC2.Imag )) / 
						((RefC2.Real * RefC2.Real ) + (RefC2.Imag * RefC2.Imag));
			}
			
		return Res;		
	}

bool Complejo::ValidarMen( float Opc )
	{
		bool Pikachu;		
		Pikachu = true;
		if( Opc < 1 || Opc > 5 )
			{
				cout << "\tERROR EN OPCION" << endl;
				cout << '\t';
				system( "pause" );	
				Pikachu = false;
			}
		
		return Pikachu;
	}
	
bool Complejo::ValidarImag( float Ima )
	{
		bool Pikachu;	
		Pikachu = true;
		if( Imag == 0 )
			{
				cout << endl;
				cout << "\tERROR AL INGRESAR EL NUMERO IMAGINARIO" << endl;
				cout << '\t';
				system( "pause" );
				cout << endl;
				Pikachu = false;
			}
		
		return Pikachu;
	}
	
bool Complejo::ValidarReal( float Rea )
	{
		bool Pikachu;	
		Pikachu = true;
		if( Real == 0 )
			{
				cout << endl;
				cout << "\tERROR AL INGRESAR EL NUMERO REAL" << endl;
				cout << '\t';
				system( "pause" );
				cout << endl;
				Pikachu = false;
			}
		return Pikachu;
	}

Complejo::~Complejo()
	{
	}
		
int main( void )
	{
		Complejo C1;
		Complejo C2;
		Complejo Res;
	
		int Opc;
		char Signo; 
		char Continuar;
		string NomOper;		
		do
			{
				Opc = C1.Menu( );
				if( Opc != 5 )
					{
						C1.Leer( );
						C2.Leer( );
						
						switch(  Opc )
							{
								case 1: 
									Res = C1.Sumar(  C2 );
									Signo = '+';
									NomOper = "SUMA";
									break;
									
								case 2:
									Res = C1.Restar( C2 );
									Signo = '-';
									NomOper = "RESTA";
									break;
									
								case 3:
									Res = C1.Multiplicar( C2 );
									Signo = '*';
									NomOper = "MULTIPLICACION";
									break;
									
								case 4:
									Res = C1.Dividir( C2 );
									Signo = '/';
									NomOper = "DIVISION";
									break;
							}
								
								cout 	<< "\t\tEl RESULTADO DE LA "
										<< NomOper << " " << "ES" << endl;
								cout    << "\t\t";
								Res.ImprimirResultado( C1, C2, Signo );
					}
				else
					{
						cout << "\t\t *******GRACIAS por utilizar la calculadora*******" << endl << endl;
						system( "pause" );
					}
				cout << "\tDesea continuar s/n: ";
				cin  >> Continuar;
				Continuar = toupper( Continuar );
			}while( Continuar == 'S');
	}
