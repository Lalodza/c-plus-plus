#define FIL 100
#define COL 100
#include <iostream>
#include <conio.h>
 
using namespace std;
 
void leer(int, int, int[][COL],int [][COL]);
void calcProducto(int, int, int[][COL],int [][COL], int[][COL]);
void calcImpri(int, int, int[][COL],int [][COL], int[][COL]);
 
main ()
{
    int a1[FIL][COL], a2[FIL][COL], a3[FIL][COL], a4[FIL][COL],f,c;
    cout<<"Ingrese el numero de filas:";cin>>f;
    cout<<"Ingrese el numero de columnas:";cin>>c;
    leer(f,c,a1,a2);
    getch();
    system("cls");
    calcProducto(f,c,a1,a2,a3);
	 
	getch();
}
 
void leer (int c, int f, int a1[FIL][COL], int a2[FIL][COL])
{
    int i,j;
    cout<<endl<<"Elementos de la Matriz A:"<<endl;
    for(i=0; i<f; i++)
    {
        for(j=0; j<c; j++)
        {
            cout<<"Leer Elemento ["<<i<<";"<<j<<"]:";
            cin>>a1[i][j];
        }
    }
    for (i=0 ; i<f; i++)
    {
        for(j=0; j<c; j++)
            cout<<a1[i][j]<<" ";
        cout<<endl;
    }
 
    cout<<endl<<"Elementos de la Matriz B:"<<endl;
    for(i=0; i<f; i++)
    {
        for(j=0; j<c; j++)
        {
            cout<<"Leer Elemento ["<<i<<","<<j<<"]:";cin>>a2[i][j];
        }
    }
    for(i=0; i<f; i++)
    {
        for(j=0; j<c; j++)
            cout<<a2[i][j]<<"  ";
        cout<<endl;
    }
}
void calcProducto(int f, int c, int a1[FIL][COL], int a2 [FIL][COL],int a3[FIL][COL])
{
    int i,j;
    cout<<endl<<"\t\tElementos de la Matriz Multiplicacion:"<<endl;
    for(i=0; i<f; i++)
    {
        for(j=0; j<c; j++)
        {
            a3[i][j]=a1[i][j]*a2[i][j];
            cout<<"El elemento ["<<i<<";"<<j<<"];";
            cout<<a3[i][j]<<endl;
        }
    }
    cout<<endl<<"La Matriz Resultante de la multiplicacion es:"<<endl;
    for(i=0; i<f; i++)
    {
          for(j=0; j<c; j++)
          cout<<a3[i][j]<<"  ";
          cout<<endl;
    }
}



