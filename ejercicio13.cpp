#include <iostream>
using namespace std;

int main() {
    int num_documentos;
    cout << "Ingrese el n�mero de documentos encontrados: ";
    cin >> num_documentos;
    
    if (num_documentos == 0) {
        cout << "No se encontraron documentos" << endl;
    } else if (num_documentos == 1) {
        cout << "Se encontr� un documento" << endl;
    } else {
        cout << num_documentos << " documentos encontrados" << endl;
    }
    
    return 0;
}

