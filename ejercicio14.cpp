#include <iostream>
using namespace std;

int main() {

  string color;
  int pisos;
  cout << "�De qu� color es la casa que vio el transe�nte? ";
  cin >> color;
  cout << "�Cu�ntos pisos tiene la casa que vio el transe�nte? ";
  cin >> pisos;

  bool casa_1 = (color == "blanca" && pisos == 2);
  bool casa_2 = (color == "amarilla" && pisos == 1);
  bool casa_3 = (color == "gris" && pisos == 3);

  if (casa_1) {
    cout << "Marqu�s est� en la casa #1." << endl;
  } else if (casa_2) {
    cout << "Marqu�s est� en la casa #2." << endl;
  } else if (casa_3) {
    cout << "Marqu�s est� en la casa #3." << endl;
  } else {
    cout << "Lo siento, no puedo determinar en qu� casa est� Marqu�s." << endl;
  }

  return 0;
}

