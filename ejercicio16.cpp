#include <iostream>

using namespace std;

int main() {
    int edad, experiencia;
    string puesto;

    cout << "Ingrese la edad del candidato: ";
    cin >> edad;

    if (edad < 18) {
        cout << "El candidato es demasiado joven." << endl;
        return 0;
    }

    cout << "Ingrese los años de experiencia del candidato: ";
    cin >> experiencia;

    if (experiencia >= 5) {
        puesto = "Director de proyecto senior";
    } else if (experiencia >= 3) {
        puesto = "Director de proyecto";
    } else {
        puesto = "Coordinador de proyecto";
    }

    cout << "El puesto de mayor jerarquía al que puede postularse es: " << puesto << endl;

    return 0;
}

