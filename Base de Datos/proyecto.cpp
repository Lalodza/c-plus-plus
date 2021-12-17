/*
	Name: PROYECTO
	Copyright: IPN
	Author: DIAZ ANAYA EDUARDO
	Date: 18/03/21 19:51
	Description: ...
*/


#include<iostream>
#include<Cstring>
#include<Cmath>
#include <iomanip>
#include <clocale>
#include <windows.h>
using namespace std;

class Escuela
{
	private:
		char **Alumnos;
		int nAlum,nCal,aprobados,reprobados,rep;
		float *copia,*calAlum,*Xi,*promAlum,aux,progru,max,min,auxi,mediana,moda,var;
		
	public:
		Escuela()  //Constructor 
		{
			rep=nAlum=nCal=aprobados=reprobados=0.0;
			Alumnos=new char*[1];
			*Alumnos=new char[2];
			calAlum=new float[1];
			Xi=new float[1];
			copia=new float[1];
			strcpy(*Alumnos, " ");
			*copia=0,*calAlum=0,*Xi=0,promAlum=0,aux=0.0,progru=0.0,max=0,min=0,auxi=0,mediana=0,moda=0,var=0;
			
		}
		
		void LeeNombre()  //lee los nombres de los alumnos y los pasa a mayusculas 
		{
			char tmp[100];
			  cout<<"Dame el numero de Alumnos a registrar: ";
			  cin>>nAlum;
			  Alumnos=new char*[nAlum];
			  system("cls");
			  cout<<"Introduce el Nombre Completo\n";
			  for(int r=0;r<nAlum;r++){
			  	cout<<"\n\tDatos del Alumno "<<r+1<<"\nEmpezando por el Apellido Paterno: \n";
			  	fflush(stdin);
			  	cin.getline(tmp,100);
			  	strupr(tmp);
			  	*(Alumnos+r)=new char[strlen(tmp)+1];
			  	strcpy(*(Alumnos+r),tmp);
			  }
		}
		
		
		void LeeCalificacion()
		{
			cout<<"\n¿Cuantas calificaciones se van a registrar?: ";
			cin>>nCal;
			if(Xi) delete []Xi;
			if(calAlum) delete []calAlum;
			if(promAlum) delete []promAlum;
			calAlum= new float[nAlum];
			promAlum= new float[nAlum];
			Xi= new float[nCal]; //Memoria Dinamica para Xi
			system("cls");
			cout<<"\nIntroduce las calificaciones de los alumnos\n";
			for(int r=0;r<nAlum;r++){
				cout<<"\t\n\n**"<<*(Alumnos+r)<<"**"<<endl;
				for(int d=0;d<nCal;d++){
					cout<<"calificacion ("<<d+1<<"): ";
					cin>>*(Xi + d);
					*(calAlum+r)+= *(Xi+d);
				}
					cout<<"\nLa matriz de calificaciones de "<<*(Alumnos+r)<<" es: "<<endl;
						for(int i=0;i<nCal;i++){
							cout<<"|"<<*(Xi+i)<<"|\t";
					}	
				*(promAlum+r)= *(calAlum+r)	/ nCal;
			}
			cout<<endl;
			system("pause");
		}
		
		
		void Ordena() //Ordena los nombres de los alumnos
		{
			char aux[100];
			for(int i=0;i<nAlum-1;i++)
				for(int j=i+1;j<nAlum;j++)
				if(strcmp(*(Alumnos+i),*(Alumnos+j))>0)
				{
					strcpy(aux,*(Alumnos+i));
					strcpy(*(Alumnos+i),*(Alumnos+j));
					strcpy(*(Alumnos+j),aux);
				}	
		}
		
		void ImpNombre()
		{
			float k=0.0;
			cout<<"\n**Lista de nombres ordenada**\n";
			for(int r=0;r<nAlum;r++){
				cout<<*(Alumnos + r)<<" su promedio es: "<<*(promAlum+r)<<endl;
				k+=*(promAlum+r);
			}
			progru=k/nAlum;	
		}
		
		
		void Resultado()  //Validar si reprobo o no el Alumno y llevar el conteo
		{
			
			cout<<"\nVamos a validar si reprobo el alumno o si paso. \n"<<endl;
			for(int i=0;i<nAlum;i++){
				if(*(promAlum+i) >= 6){
					cout<<"El alumno "<<*(Alumnos+i)<<" [APROBO]  :) "<<endl;
					aprobados++;
				}else{
					cout<<"El alumno "<<*(Alumnos+i)<<" [REPROBO]  ;( )"<<endl;
					reprobados++;
				}
			}
		}

		int Cuenta(float dato)
		{
			int cta=0;
			for(int d=0;d<nAlum;d++)
				if(dato == *(promAlum+d))
					cta++;
			return cta;
		}
		
		void Max()   //Validar cual es el promedio mas alto
		{
			max= *promAlum;
			for(int d=1;d<nAlum;d++)
				if(*(promAlum+d)>max)
					max= *(promAlum+d);
		}
		
		void Min()  //Validar cual es el promedio mas bajo
		{
			min= *(promAlum+0);
			for(int d=1;d<nAlum;d++)
				if(*(promAlum+d)<min)
					min= *(promAlum+d);
		}
		
		void OrdenaNum()  //Se ordenan los promedio para calcular la Mediana
		{
			copia=new float[nAlum];
			for(int i=0;i<nAlum;i++)	
				*(copia+i)=*(promAlum+i);
			float auxi;
			for(int i=0;i<nAlum-1;i++)
				for(int j=i+1;j<nAlum;j++)
					if(*(copia+i)>*(copia+j)){
						auxi= *(copia+i);
						*(copia+i)= *(copia+j);
						*(copia+j)= auxi;
					}
		}
		
		void Mediana()  //Se calcula la mediana dependiendo si es par o impar la muestra
		{
			int pos= nAlum/2;
			if(nAlum%2 != 0) //Si es impar
				mediana = *(copia + pos);
			else
				mediana = (*(copia + pos) + *(copia + (pos-1)))/2;
		}

		void Moda()  //Se calcula la moda de los promedios del grupo
		{
			float num;
			for(int d=0;d<nAlum;d++){
				num= *(promAlum+d);
				int frec= Cuenta(num);
				if(rep <= frec)
				{
					rep= frec;
					moda= *(promAlum+d);
				}
			}
		}

		void Varianza()  //Se calcula la varianza de la muestra
		{
			var=0.0;
			for(int d=0;d<nAlum;d++)
				var+= pow((progru - *(promAlum+d)), 2);
			var/=(nAlum-1);
		}

		void Estadistica()	//Imprime la estadistica de la muestra
		{
			cout<<"\n********************\n";
			cout<<"*  ESTADISTICA  *\n";
			cout<<"********************\n\n";
			cout<<"EL numero de alumnos es: "<<nAlum<<endl
				<<"Aprobados: "<<aprobados<<endl
				<<"Reprobados: "<<reprobados<<endl
				<<"Pomedio grupal: "<<progru<<endl
				<<"Calificaion Maxima: "<<max<<endl
				<<"Calificacion Minima: "<<min<<endl
				<<"Mediana: "<<mediana<<endl
				<<"Moda: "<<moda<<endl
				<<"Varianza: "<<var<<endl<<endl;
			//cout<<"Desviacion Estandar: "<<
			 
			
		}

		~Escuela()  //Destructor
		{
			if(Alumnos)
				for(int r=0;r<nAlum;r++)
					delete *(Alumnos + r);
				delete []Alumnos;
			cout<<"\n\n Memoria liberada\n FIN DEL PROGRAMA\n\n";
			system("pause");
		}
};


int main()
{
	setlocale(LC_ALL, "SPANISH");
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	
	Escuela E;
	E.LeeNombre();
	E.Ordena();
	E.LeeCalificacion();
	system("cls");
	E.ImpNombre();
	E.Resultado();
	E.Max();
	E.Min();
	E.OrdenaNum();
	E.Mediana();
	E.Moda();
	E.Varianza();
	E.Estadistica();
	return 0;
}




/*
	*1.-preguntar el numero de alumnos **numAlum
	*2.-leer la lista de los alumnos(paterno, maternos, nombres) 
	*3.-ordenar la lista de alumnos **
	*4.-preguntar el numero de calificaciones **numCal
	*5.-leer las calificaciones con la lista ordenada  **cal
	IMPRIMIR
		*6.-lista de alumnos (ordenada)
		*7.-matriz de calificaciones
		*8.-promedio de las calificaciones
		*9.-el resultado por alumno (aprobo  no aprobo)
	ESTADISTICA
		10.-num alumnos
		11.-aprobados
		12.-no aprobados.-
		13.-promedio grupal
		14.-calificaion max
		15.-calificaion min
		16.-mediana
		17.-moda
		18.-varianza
		19.-desviacion estandar
*/
