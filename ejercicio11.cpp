#include <iostream>
#include <string>

using namespace std;

int main() {
    string codigo = "12345678"; // C�digo del collar de Fibo
    string codigo_ingresado;
    
    cout << "Ingrese el c�digo del collar: ";
    cin >> codigo_ingresado;
    
    if (codigo == codigo_ingresado) {
        cout << "El c�digo ingresado pertenece a Fibo." << endl;
    } else {
        cout << "El c�digo ingresado NO pertenece a Fibo." << endl;
    }
    
    return 0;
}

