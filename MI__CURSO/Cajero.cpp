#include<iostream>

using namespace std;

int main(){
	int saldo_inicial=1000, opc;
	float extra,saldo=0;
	
	cout<<"\t\t**********************\n";
	cout<<"\t\t*   CAJERO VIRTUAL   *\n";
	cout<<"\t\t**********************\n";
	cout<<"\t1.-Ingresar Dinero a su Cuenta\n";
	cout<<"\t2.-Retirar Dinero de la Cuenta\n";
	cout<<"\t3.-SALIR\n";
	cout<<"      Opcion: ";
	cin>>opc;
	system("cls");
	
	switch(opc){
		case 1:
			cout<<"****************************************************\n";
			cout<<"\t\t\t    SALDO ACTUAL: "<<saldo_inicial<<endl<<endl;
			cout<<"Digite la cantida a Ingresar: ";
			cin>>extra;
			saldo = saldo_inicial + extra;
			system("cls");
			cout<<"\nSu saldo total es de: "<<saldo;
			break;
		case 2:
			cout<<"****************************************************\n";
			cout<<"\t\t\t    SALDO ACTUAL: "<<saldo_inicial<<endl<<endl;
			cout<<"Digite la cantida a Retirar: ";
			cin>>extra;
			system("cls");
			if(extra>saldo_inicial){
				cout<<"****************************************************\n";
				cout<<"\t\t\t    SALDO ACTUAL: "<<saldo_inicial<<endl<<endl;
				cout<<"\n SALDO INSUFICIENTE ";
			}
			else {
				saldo=saldo_inicial - extra;
				cout<<"\nSu saldo total es de: "<<saldo;
			}
			break;
		case 3: 
			//SALIR
			break;
	}

	return 0;
}

