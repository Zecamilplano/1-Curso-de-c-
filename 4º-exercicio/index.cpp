// Faça um programa que: vai perguntar 2 varíaveis a e b depois imprima os
// valores invertido

#include <iostream>

using namespace std;

int main() {
  int a, b, c;

  cout << "Valor de A ";
  cin >> a;
  cout << "Valor de B ";
  cin >> b;

  c = a;
  a = b;
  b = c;

  cout << "O valor de A é " << a << endl;
  cout << "E o valor de B é " << b << endl;
  return 0;
}
