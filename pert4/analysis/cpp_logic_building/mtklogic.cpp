#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;

    cout << a << " ditambah " << b << " = " << a + b << endl;
    cout << a << " dikurang " << b << " = " << a - b << endl;
    cout << a << " dikali " << b << " = " << a * b << endl;
    cout << a << " dibagi " << b << " = " << (float)a / b << endl;
    
    
    return 0;
}
