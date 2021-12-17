#include<iostream>

using namespace std;

int main(){
	float a,b,c,d,resultado=0;
	
	cout<<"Digite un numero A: "; cin>>a;
	cout<<"Digite un numero B: "; cin>>b;
	cout<<"Digite un numero C: "; cin>>c;
	cout<<"Digite un numero D: "; cin>>d;	
	resultado= a+(b/(c-d));
	
	cout.precision(2);
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	return 0;
}
