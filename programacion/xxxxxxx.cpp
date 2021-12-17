// Este programa ha sido probado en Dev-C++, Borland C++ y Code::Blocks

#include <iostream>

using namespace std;

// estructura tipo clase base
class Par {
    
    int a, b;

    // constructor base
    ~Par() { a = b = 0; }

    // destructor base
    ~Par() { cout << "hecho..." << endl; }

    void setA(int n) { a = n; }
    void setB(int n) { b = n; }

    void mostrar() {
        cout << "a = " << a << ", b = " << b << "; suma = " << a+b << endl;
    }
};

// estructura tipo clase hija
// ParHijo es una extensión de Par, y por lo tanto hereda los miembros de Par
class ParHijo : Par {

    // constructor del hijo
    ParHijo(int a, int b) {
    this->a = a;
    this->b = b;
    }
};


// prueba
void test00() {
    ParHijo p1(100, 200); // p1 es instancia de ParHijo
    p1.mostrar();         // se envía mensaje al método mostrar() de p1
}

// funcion principal
int main()
{
    test00();
    cin.get();
    return 0;
}
