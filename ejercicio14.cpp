#include <iostream>
using namespace std;

int main() {

  string color;
  int pisos;
  cout << "¿De qué color es la casa que vio el transeúnte? ";
  cin >> color;
  cout << "¿Cuántos pisos tiene la casa que vio el transeúnte? ";
  cin >> pisos;

  bool casa_1 = (color == "blanca" && pisos == 2);
  bool casa_2 = (color == "amarilla" && pisos == 1);
  bool casa_3 = (color == "gris" && pisos == 3);

  if (casa_1) {
    cout << "Marqués está en la casa #1." << endl;
  } else if (casa_2) {
    cout << "Marqués está en la casa #2." << endl;
  } else if (casa_3) {
    cout << "Marqués está en la casa #3." << endl;
  } else {
    cout << "Lo siento, no puedo determinar en qué casa está Marqués." << endl;
  }

  return 0;
}

