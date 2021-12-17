//AREA de un anillo, paso por referencia 
//Eduardo Diaz Anaya 
//Boleta: 2020300206

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
const float PI = 3.1416;

void CalcArea(float&,float&,float&);
void ImprimirArea(float,float,float);

int main(){
	float R,r,area;
	cout<<"\tPROGRAMA PARA CALCULAR EL AREA DE UN ANILLO\n";
	cout<<"\nDame el RADIO de la circunferencia EXTERIOR en metros: ";
 	cin>>R;
 	cout<<"\nDame el RADIO de la circunferencia INTERIOR en metros: ";
 	cin>>r;
 	system ("cls");
 	CalcArea(R, r, area);
	ImprimirArea(R, r, area); 	

 	getch();
 	return 0;
}

void CalcArea (float& r_ext, float& r_int, float& resultado){
	cout<<"\n\tEl Area para el anillo"<<endl;
	cout<<"\nRadio Exterio:  "<<r_ext<<" m.";
	cout<<"\nRadio Interior:  "<<r_int<<" m."<<endl;
	resultado = PI*(pow(r_ext, 2)-pow(r_int,2));
}

void ImprimirArea (float R, float r, float res){
	cout<<"\n\tEl AREA DEL ANILLO ES:  "<<res<<" m2 "<<endl;
}
