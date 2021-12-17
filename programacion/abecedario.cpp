#include <iostream>
#include <vector>
 
using namespace std;

int main()
{
    vector<char> v;
 
    for( char i = 'A'; i <= 'Z'; i++ ){
        v.push_back( i );
    }
 
    vector<char>::size_type sz = v.size();
 
    cout << "\nVocales: ";
    for( unsigned i = 0; i < sz; i++ )
        if( v[i] == 'A' || v[i] == 'E' || v[i] == 'I' ||
            v[i] == 'O' || v[i] == 'U')
            cout << v[i] << " ";
 
    cout << "\n\nConsonantes: ";
    for( unsigned i = 0; i < sz; i++ )
        if( v[i] != 'A' && v[i] != 'E' && v[i] != 'I' &&
            v[i] != 'O' && v[i] != 'U')
            cout << v[i] << " ";
 
    cout << endl;
 
    return 0;
 
}
