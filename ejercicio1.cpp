
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1, num2;
    cout << "Ingrese dos números double: ";
    cin >> num1 >> num2;
    int sum = (int)(num1 + num2); // Convertir la suma a entero
    cout << "La parte entera de la suma es: " << sum << endl;
    return 0;
}

