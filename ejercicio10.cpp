#include <iostream>
#include <string>

using namespace std;

int main() {
    int doc;
    string respuesta;

    cout << "Ingrese el número de documentos: ";
    cin >> doc;

    respuesta = to_string(doc) + " documentos encontrados";

    cout << respuesta << endl;

    return 0;
}
