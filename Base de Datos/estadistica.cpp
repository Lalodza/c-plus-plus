/*
	Name: ESTADISTICAS
	Copyright: IPN
	Author: DIAZ ANAYA EDUARDO
	Date: 16/03/21 19:16
	Description: programa que dependiendo del valor de una muestra te la estadistica de dicha muestra
*/


#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

class Estad
{
	private:
		int n,rep;
		float *Xi,*copia, media, mediana, moda, var, desv, max, min;
	
	public:
		Estad()
		{
			n=rep=0;
			Xi= new float[1]; //es lo minimo que se puede reservar para un VECTOR
			copia=new float[1];
			*Xi= *copia= mediana= media= moda= var= desv= max= min= 0.0;
		}
		
		void Lee()
		{
			cout<<"\n¿Cual es el tamaño de la muestra?: ";
			cin>>n;
			if(Xi) delete []Xi;
			Xi= new float[n]; //Memoria Dinamica para Xi
			cout<<"\nintroduce los "<<n<<" datos\n";
			for(int d=0;d<n;d++){
				cout<<"Dato "<<d+1<<": ";
				cin>>*(Xi + d);
			}
		}
		
		void Media()
		{
			media=0.0;
			for(int d=0;d<n;d++){
				media+= *(Xi+d);
			media/= n;
			}
		}
		
		/*
		void Ordena()
		{
			float aux;
			for(int i=0;i<n-1;i++){
				for(int j=i+1;j<n;j++){
					if(*(Xi +1) > *(Xi + j)){
						aux= *(Xi +i);
						*(Xi + i)= *(Xi + j);
						*(Xi + j)= aux;
					}
				}
			}
		}
		*/
		
		void Ordena()
		{
			copia=new float[n];  //memoria dinamica
			for(int i=0;i<n;i++)	
				*(copia+i)=*(Xi+i);		//se pasa el vector Xi a Copia
			float aux;
			for(int i=0;i<n-1;i++)
				for(int j=i+1;j<n;j++)
					if(*(copia+i)>*(copia+j)){
						aux= *(copia+i);
						*(copia+i)= *(copia+j);
						*(copia+j)= aux;
					}
		}
		
		
		void Mediana()
		{
			int pos= n/2;
			if(n%2 != 0) //Si es impar
				mediana = *(copia + pos);
			else
				mediana = (*(copia + pos) + *(copia + (pos-1)))/2;
		}
		
		void Moda()
		{
			float num;
			for(int d=0;d<n;d++){
				num= *(Xi+d);
				int frec= Cuenta(num);
				if(rep <= frec)
				{
					rep= frec;
					moda= *(Xi+d);
				}
			}
		}
		
		int Cuenta(float dato)
		{
			int cta=0;
			for(int d=0;d<n;d++)
				if(dato == *(Xi+d))
					cta++;
			return cta;
		}
		
		/*
		void Varianza()
		{
			var= 0.0;
			for(int d=0;d<n;d++){
				var+= pow((*(Xi+d)-media), 2);
			if(n<= 30) var/= (n-1);
			else var/= n;
			
			desv= sqrt(var);
			}
		}
		*/
		
		void Varianza()
		{
			var=0.0;
			for(int d=0;d<n;d++)
				var+= pow((media - *(Xi+d)), 2);
			var/=(n-1);
		}
		
		void Max()
		{
			max= *Xi;
			for(int d=1;d<n;d++)
				if(*(Xi+d)>max)
					max= *(Xi+d);
		}
		
		void Min()
		{
			min= *(Xi+0);
			for(int d=1;d<n;d++)
				if(*(Xi+d)<min)
					min= *(Xi+d);	
		}
		
		void Imp()
		{
			cout<<"\nDatos de la muestra: "<<endl;
			for(int d=0;d<n;d++){
				cout<<*(Xi + d) << '\t';
			cout<<"\nMedia= "<< media
				<<"\nMediana= "<< mediana
				<<"\nModa= "<< moda <<" y se repite "<<rep<<" veces"
				<<"\nVarianza= "<< var
				<<"\nDesviacion Estandar= "<<desv
				<<"\nEl dato Mayor= "<<max
				<<"\nEl dato Menor= "<<min<<endl;
			}
		}
		
		
		
		void Menu()
		{
			char cont;
			do{
				system("cls");
				cout<<"\tCALCULO DE ESTADISTICA DE UNA MUESTRA"<<endl;
				Lee();
				Media();
				Ordena();
				Mediana();
				Moda();
				Varianza();
				//Desv();
				Max();
				Min();
				Imp();
				cout<<"\n\n\t¿Continuar (S/N)?: ";
				cin>>cont;
			}while(cont== 's' || cont== 'S');
		}
		~Estad()
		{
			if(Xi) delete []Xi;
			if(copia) delete []copia;
			cout<<"\nMemoria liberada \n FIN DEL PROGRAMA\n\n";
			system("pause");
		}
};

int main()
{
	setlocale(LC_ALL, "SPANISH");
	Estad E;
	E.Menu();
	return 0;
}

