#include <iostream>
using namespace std;

int main() {
    double n, a, b, x, y, descuento;
    cout << "Ingrese el costo inicial del producto: ";
    cin >> n;
    cout << "Ingrese el valor de A: ";
    cin >> a;
    cout << "Ingrese el valor de B: ";
    cin >> b;
    cout << "Ingrese el valor de X: ";
    cin >> x;
    cout << "Ingrese el valor de Y: ";
    cin >> y;

    if (n > b) {
        descuento = y;
    } else if (n > a) {
        descuento = x;
    } else {
        descuento = 0;
    }

    double costo_descuento = n * (1 - descuento / 100);
    cout << "El costo del smartphone con descuento es de: " << costo_descuento << " bolivianos" << endl;

    return 0;
}

