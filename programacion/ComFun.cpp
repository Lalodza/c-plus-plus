/* Nombre del programa: ComFun.cpp
*/

using namespace std;

#include <iostream>
#include <cctype>

class Complejo 
	{
		private:
			int Real;
			int Imaginario;
			
		public:
			//Constructor con parámetros por omisión
			Complejo(int Rea = 0, int Ima = 1 );

			//Para seleccionar una opción
			int Menu( void );

			//Funcione set (asignacion)
			void AsigRea( int Rea );
			void AsigIma( int Ima );
      	
			//Funciones get (obtener)
			int ObtRea( void );
			int ObtIma( void );

			//Lectura e impresión de Complejo
			void Leer( void );
			
			void ImprimirComplejo( void );
			void ImprimirResultado(	Complejo &RefC1, Complejo &RefC2,
									char Signo );

			//Operaciones Aritméticas
			Complejo Sumar( Complejo &RefC2 );
			Complejo Restar( Complejo &RefC2 );
			Complejo Multiplicar( Complejo &RefC2 );
			Complejo Dividir( Complejo &RefC2 );

			//Operación de validacion*********************************************************************************
			bool ValidarMen( int Opc );
			bool ValidarIma( int Ima );
			bool ValidarDiv( int Rea );
			
			//Operaciones de Simplificación de los números racionales
			void Simplificar( void );
			int MCD( void );
			void Normalizar( void );
			
			//Destructor
			~Complejo( );
	}; //Fin de la clase Complejo{ }

//Constructor con parámetros por omisión
Complejo::Complejo(int Rea, int Ima )
	{
		AsigRea( Rea );
		AsigIma( Ima );
		
		/*cout << "Estoy naciendo y me llamo: ";
		ImprimirComplejo( );
		cout << endl;
		system( "pause");
		*/
	}//

//Para seleccionar una opción
int Complejo::Menu( void )
	{
		int Opc;
		
		do
			{
				system( "cls");
				
				cout 	<< "\t\tELIJE UNA OPCION" << endl << endl

        				<< "\t1 Suma de dos Complejos" << endl
        				<< "\t2 Resta de dos Complejos" << endl
        				<< "\t3 Multiplicacion de dos Complejos" << endl			
        				<< "\t4 Division de dos Complejos" << endl
        				<< "\t5 Terminar el programa" << endl << endl

        				<< "\tEscribe tu opcion: ";
        		
        		cin 	>> Opc;
        		cout 	<< endl;
			}while( ValidarMen( Opc ) == false );
			
		return Opc;
	}//

//Funcione set (asignacion)
void Complejo::AsigRea( int Rea )
	{
		Real = Rea;
	}//
	
void Complejo::AsigIma( int Ima )
	{
		if( ValidarIma( Ima ) == false )
			Imaginario = 1;
		else
			Imaginario = Ima;
		
		if ( Imaginario < 0 )	
			Normalizar( );
	}//
      	
//Funciones get (obtener)
int Complejo::ObtRea( void )
	{
		return Real;
	}//
	
int Complejo::ObtIma( void )
	{
		return Imaginario;
	}//

//Lectura e impresión de Complejos
void Complejo::Leer( void )
	{
		static int i = 1;
		int Ima;
		
		cout 	<< "\t\tLECTURA DEL COMPLEJO " << i << endl << endl
        		<< "\tDame el Real  	: ";
        cin     >> Real;		
        
		do
			{
				cout << "\tDame el Imaginario	: ";
				cin  >> Ima;
			}while ( ValidarIma( Ima ) == false );
			
		AsigIma( Ima );
		
		cout << endl;
		i++;
		
		if( ObtIma( ) < 0 )
			Normalizar();	
	}//

void Complejo::ImprimirComplejo( void )
	{
		if( ObtRea( ) == 0 )
			cout << 0;
		else
			if( ObtIma( ) == 1 )
				cout << ObtRea( );
			else
				if( ObtRea( ) == ObtIma( ) )
					cout << 1;
				else
					cout << ObtRea( ) << '/' << ObtIma( );
	}//Fin de ImprimirComplejo( )
	
void Complejo::ImprimirResultado(	Complejo &RefC1, Complejol &RefC2,
									char Signo)
	{
		RefC1.ImprimirComplejo( );
		cout << " " << Signo << " ";
		RefC2.ImprimirComplejo( );
		cout << " = ";
		ImprimirComplejo( );
		
		cout << endl << endl;
	}//

//Operaciones Aritméticas
Complejo Complejo::Sumar( Complejo &RefC2 )
	{
		Complejo Res;
		
		Res.Real 	   = Real * RefC2.Imaginario + RefC2.Real * Imaginario;
		Res.Imaginario = ( Imaginario * RefC2.Imaginario);
						
		return Res;	
	}//
	
Complejo Complejo::Restar( Complejo &RefC2 )
	{
		Complejo Res;
		
		Res.Real 	= Real + RefC2.Real;
		Res.Imaginario = Imaginario RefC2.Imaginario;
						
		return Res;	
	}//
	
Complejo Complejo::Multiplicar( Complejo &RefC2 )
	{
		Complejo Res;
		
		Res.Real 	= Real * RefC2.Real;
		Res.Imaginario = Imaginario * RefC2.Imaginario;
		
		return Res;
	}//
	
Complejo Complejo::Dividir( Complejo &RefC2 )
	{
		Complejo Res;
		
		if( ValidarDiv( RefR2.Real ) == false )
			;
		else
			{
				Res.Real = Real * RefC2.Imaginario;
				Res.Imaginario = RefC2.Real * Imaginario;
			}//
		
		if( Res.Imaginario < 0 )
			Res.Real( )	;
			
		return Res;
	}//

//Operación de validacion
bool Complejo::ValidarMen( int Opc )
	{
		bool Bandera;
		
		Bandera = true;
		
		if( Opc < 1 || Opc > 5 )
			{
				cout << "\tERROR EN OPCION" << endl;
				cout << '\t';
				system( "pause" );
				
				Bandera = false;
			}
		
		return Bandera;
	}//
	
bool Complejo::ValidarIma( int Ima )
	{
		bool Bandera;
		
		Bandera = true;
		
		if( Ima == 0 )
			{
				cout << endl;
				
				cout << "\tERROR EN EL IMAGINARIO" << endl;
				cout << '\t';
				system( "pause" );
				
				cout << endl;
				Bandera = false;
			}
		
		return Bandera;
	}//
	
bool Complejo::ValidarDiv( int Ima )
	{
		bool Bandera;
		
		Bandera = true;
		
		if( Ima == 0 )
			{
				cout << "\tNO SE PUEDE DIVIDIR" << endl;
				cout << '\t';
				system( "pause" );
				
				Bandera = false;
			}
		
		return Bandera;
	}//

//Operaciones de Simplificación de los números complejos
void Complejo::Simplificar( void )
	{
		int mcd;
		
		mcd = MCD(  );
		
		Real 	= Real / mcd;
		Imaginario = Imaginario / mcd;
	}
	
int Complejo::MCD( void )
	{
		int mcd;
		
		Complejo Copia;
		
		Copia = *this;
		
		if( Copia.Real < 0 )
			Copia.Real = - Copia.Real;
			
		if( Copia.Imaginario < 0 )
			Copia.Imaginario = - Copia.Imaginario;
			
		int ANueva;
		int BNueva;
		
		while ( Copia.Imaginario != 0 )	
			{
				ANueva = Copia.Imaginario;
				BNueva = Copia.Real % Copia.Imaginario;
				
				Copia.Real = ANueva;
				Copia.Imaginario = BNueva;
			}//Fin del while
			
		return ANueva;
	}//
	
void Complejo::Normalizar( void )
	{
		Real 	= - Real;
		Imaginario = - Imaginario;
	}//

//Destructor
Complejo::~Complejo( )
	{
		/*cout << "Estoy liberandome y me llamo: ";
		ImprimirComplejo( );
		cout << endl;
		system( "pause");
		*/
	}	//
	
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
									Res = C1.Sumar( C2 );
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
							}//Fin del switch
						
						if( Opc == 4 && C2.ObtIma( ) == 0 )
							;
						else
							{
								Res.Simplificar(  );
								
								cout 	<< "\t\tEl RESULTADO DE LA "
										<< NomOper << " " << "ES" << endl;
								cout    << "\t\t";
								Res.ImprimirResultado( C1, C2, Signo);
							}
												
					}
				else
					{
						cout << "\t\t Hasta la vista chavo" << endl;
						cout << '\t';
						system( "pause" );
					}
				
				cout << '\t';
				cout << "Desea continuar s/n: ";
				cin  >> Continuar;
				Continuar = toupper( Continuar );
			}while( Continuar == 'S');
	}//Fin del main( )
