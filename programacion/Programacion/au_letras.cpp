/*
     leer una palabra, contar vocales, invertir la palabra, buscar una letra;
     by Jorge Anzaldo
*/
#include<iostream>
#include<string.h>
using namespace std;
void leer (char []);
void ver (char []);
void contar_vocales(char []);
void invertir(char []);
void buscar(char []);
main(){
    char palabra[50];
    leer(palabra);
    ver(palabra);
    invertir(palabra);
    contar_vocales(palabra);
    buscar(palabra);
}
void leer (char p[]){
    cout<<" Escribe una palabra : ";cin>>p;
}
void ver (char p[]){
    cout<<" La Palabra escrita es : "<<p<<endl;
}
void contar_vocales(char p[]){
    int vocal=0;
    for(int i=0; i<=strlen(p); i++){
        if(toupper(p[i])=='A' || toupper(p[i])=='E' || toupper(p[i])=='I'){
            vocal++;
        }
    }
    cout<<"\nNumero de vocales : "<<vocal<<endl;
}
void invertir(char p[]){
    for(int i=strlen(p); i>=0; i--){
        cout<<p[i];
    }
}
void buscar(char p[]){
    char letra;
    cout<<"Que letra deseas buscar ";cin>>letra;
    for(int i=0; i<=strlen(p); i++){
        if(p[i]==letra){
            cout<<" La letra  "<<letra<<"  esta en la posicion : "<<i<<endl;
        }
    }
}
