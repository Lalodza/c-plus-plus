#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numero[100],n;
	
	cout<<"Digite el numero de elementos del arreglo: ";cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Digite un numero: ";cin>>numero[i];
	}
	system("cls");
	for(int i=n;i>=0;i--){
		cout<<i<<" -> "<<numero[i]<<endl;
	}
	
	getch();
	return 0;
}
