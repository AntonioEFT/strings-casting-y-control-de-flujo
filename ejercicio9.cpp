#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int num1, num2, sum;
    string sumStr;

    cout << "Introduzca dos números enteros no negativos separados por un espacio: ";
    cin >> num1 >> num2;

    sum = num1 + num2;
    
    stringstream ss;
    ss << sum;
    
    sumStr = ss.str();
    int prod = sum * sumStr.size();

    cout << "La suma de " << num1 << " y " << num2 << " es " << sum << endl;
    cout << "El producto de la suma por el número de dígitos es " << prod << endl;

    return 0;
}

