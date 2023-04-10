#include <iostream>
#include <string>

using namespace std;

int main() {
    string libros[3];
    
    for (int i = 0; i < 3; i++) {
        getline(cin, libros[i]);
    }
    
    for (int i = 2; i >= 0; i--) {
        cout << libros[i] << endl;
    }
    
    return 0;
}

