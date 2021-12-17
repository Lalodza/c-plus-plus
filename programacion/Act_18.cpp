//Alumno: Diaz Anaya Eduardo
//Boleta: 2020300206
#include <iostream>
#include <conio.h> 
using namespace std;
 
void leer(int, int, int[][5],int [][5]);
void calc(int, int, int[][5],int [][5], int[][5]);
 
int main ()
{
    int a1[5][5], a2[5][5], a3[5][5],f,c;
    cout<<"DE que Dimensiones quieres las Matrices?\n Como maximo 5 x 5\n";
    cout<<"\tIngrese el numero de filas:";cin>>f;
    cout<<"\tIngrese el numero de columnas:";cin>>c;
    leer(f,c,a1,a2);
    cout<<"\nPresiona una tecla para hacer una suma de las matrices...";
    getch();
    calc(f,c,a1,a2,a3);
    
}
 
void leer (int c, int f, int a1[5][5], int a2[5][5])
{
    int i,j;
    cout<<endl<<"\tElementos de la Matriz A:"<<endl;
    for(i=0; i<f; i++)
    {
        for(j=0; j<c; j++)
        {
            cout<<"Leer Elemento ["<<i<<";"<<j<<"]:";
            cin>>a1[i][j];
        }
    }
    cout<<"\n\t\tMATRIZ A\n";
    for (i=0 ; i<f; i++)
    {
        for(j=0; j<c; j++)
            cout<<a1[i][j]<<" ";
        cout<<endl;
    }
 
    cout<<endl<<"\tElementos de la Matriz B:"<<endl;
    for(i=0; i<f; i++)
    {
        for(j=0; j<c; j++)
        {
            cout<<"Leer Elemento ["<<i<<","<<j<<"]:";
			cin>>a2[i][j];
        }
    }
    cout<<"\n\t\tMATRIZ B\n";
    for(i=0; i<f; i++)
    {
        for(j=0; j<c; j++)
            cout<<a2[i][j]<<"  ";
        cout<<endl;
    }
}
void calc(int f, int c, int a1[5][5], int a2 [5][5],int a3[5][5])
{
    int i,j;
    cout<<endl<<"\tElementos de la Matriz C:"<<endl;
    for(i=0; i<f; i++)
    {
        for(j=0; j<c; j++)
        {
            a3[i][j]=a1[i][j]+a2[i][j];
            cout<<"El elemento ["<<i<<";"<<j<<"];";
            cout<<a3[i][j]<<endl;
        }
    }
    cout<<endl<<"La Matriz Resultante es:"<<endl;
    for(i=0; i<f; i++)
    {
          for(j=0; j<c; j++)
          cout<<a3[i][j]<<"  ";
          cout<<endl;
    }
}


