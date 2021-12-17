#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int i=0;
	float temp, temp_a = 0, temp_b=100, temp_p, suma = 0;
	
	cout<<"\t**********El programa mostrara la temperatura mas alta, la mas baja y la media**********\n";
	cout<<"\nDigite la temperatura cada 4hrs\n\n\n\n";
	system("pause");
	system("cls");
	
	
	while(i<24){
		i=i+4;
		cout<<" Son las "<<i<<" hrs.\n";
		cout<<"Registra la Temperatura: ";cin>>temp;
		system("cls");
		
		if (temp>temp_a){
			temp_a=temp;
		////se integra if de temp_b
			if(temp<temp_b){
				temp_b=temp;
			}
			else{
				temp_b=temp_b;
		}		
		}
		else{
			temp_a=temp_a;
		}
		
		suma = suma+temp;
	}
	temp_p=suma/6;
	
	cout<<"La temperatura mas alta registrada es de: "<<temp_a<<endl;
	cout<<"La temperatura mas baja registrada es de: "<<temp_b<<endl;
	cout<<"La temperatura promedio es de: "<<temp_p<<endl;
	
	
	getch();
	return 0;
}

