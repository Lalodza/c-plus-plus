#include<iostream>
#include<Cstring>
#include<Cctype>
using namespace std;

class Cadena
{
	private:
		char *cad;
		int longi, voc, cons, pals;
	public:
		Cadena()
		{
			longi=voc=cons=pals=0;
			cad=new char[2];
			strcpy(cad," ");
		}
		
		void Lee()
		{
			char tmp[100];
			cout<<"\nIntroduce una cadena: ";
			cin.getline(tmp,100);
			cad= new char[strlen(tmp)+1];
			strcpy(cad,tmp);
		}
		
		void Largo()
		{
			longi=0;
			for(longi; *(cad+longi)!= '\0';longi++);
		}
		
		void Vocales()
		{
			voc=0;
			
		}
		
		void Conson()
		{
			cons=0;
		}
		
		void Palabras()
		{
			pals=0;
			for(int c=1; *(cad+c)!= '\0';c++){
				if(*(cad+(c-1))==' '&&isalpha(*(cad+c)))
				pals++;
			}
			if(isalpha(*(cad+0)))
			pals++;
		}
		
		void Alreves()
		{
			for(int c=strlen(cad);c>=0;c--)
				cout<<*(cad+c);
		}
		
		void Mayusculas()
		{
			char mayus;
			for(int c=0;*(cad+c)!='\0';c++){
				mayus=toupper(*(cad+c));
				cout<<mayus;
			}
		}
		
		void Minusculas()
		{
			char minus;
			for(int c=0;*(cad+c)!='\0';c++){
				minus=tolower(*(cad+c));
				cout<<minus;
			}
		}
		
		void Imp()
		{
			system("cls");
			cout<<"\nLa cadena leida es: "<<cad
				<<"\nSu longuitud es: "<<longi
				<<"\nNumero de palabras: "<<pals
				<<"\nNumero de vocales"<<voc
				<<"\nNumero de consonantes"<<cons<<endl;
			cout<<"\nImpreso al reves: ";Alreves();
			cout<<"\nImpreso en minusculas: ";Minusculas();
			cout<<"\n Impreso en mayusculas: ";Mayusculas();
			cout<<endl;
		}
		
		~Cadena()
		{
			if(cad) delete[]cad;
			cout<<"\nMemoria liberada \nFin del programa\n\n";
			system("pause");
		}	
};

int main()
{
	setlocale(LC_ALL, "SPANISH");
	Cadena C;
	C.Lee();
	C.Largo();
	C.Palabras();
	C.Mayusculas();
	C.Minusculas();
	C.Imp();
	return 0;
}
