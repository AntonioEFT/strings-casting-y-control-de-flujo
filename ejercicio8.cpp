#include <iostream>
using namespace std;

int main() {
   string word1, word2, word3, word4, word5;
   cout << "Introduce cinco palabras separadas por espacios: ";
   cin >> word1 >> word2 >> word3 >> word4 >> word5;
   cout << "El primer caracter de cada palabra es: " << endl;
   cout << word1[0];
   cout << word2[0];
   cout << word3[0];
   cout << word4[0];
   cout << word5[0] << endl;
   return 0;
}

