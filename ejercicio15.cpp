#include <iostream>

using namespace std;

int main() {
    char c;

    cout << "Ingrese un caracter: ";
    cin >> c;

    if (c >= 'A' && c <= 'Z') {
        cout << "El caracter esta en mayusculas" << endl;
    } else if (c >= 'a' && c <= 'z') {
        cout << "El caracter esta en minusculas" << endl;
    } else {
        cout << "No es un caracter" << endl;
    }

    return 0;
}

