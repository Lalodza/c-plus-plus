/*
by Jorge Anzaldo
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void leer(int &);
int factorial(int );
main(){
    int n;
    cout<<"\n Programa que muestra el factorial de un numero "<<endl;
    leer(n);
    cout<<" El factorial de "<<n<<"! = "<<factorial(n)<<endl; }
void leer(int &n){
    cout<<"Dame un numero : ";
    cin>>n; }

int factorial(int n){
    int fact=1;
	for(int i=1; i<=n; i++){
		fact *=i;
    }
    return fact;}
