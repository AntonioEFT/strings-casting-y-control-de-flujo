#include <iostream>
#include <string>

using namespace std;

int main() {
    string codigo = "12345678"; // Código del collar de Fibo
    string codigo_ingresado;
    
    cout << "Ingrese el código del collar: ";
    cin >> codigo_ingresado;
    
    if (codigo == codigo_ingresado) {
        cout << "El código ingresado pertenece a Fibo." << endl;
    } else {
        cout << "El código ingresado NO pertenece a Fibo." << endl;
    }
    
    return 0;
}

