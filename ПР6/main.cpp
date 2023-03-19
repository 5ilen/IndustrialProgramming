#include <iostream>

#include "ПР6\Задача1\cone.h"
#include "ПР6\Задача2\useccone.h"

using namespace std;

int main() {
  Cone* cone = new Cone(5, 3);
  cone->print();

  Useccone* useccone = new Useccone(5, 3, 1);
  useccone->print();

  Cone* array = new Cone[3];
  for (int i = 0; i < 3; ++i) {
    float cx, cy, cz, radius, height;
    cin >> cx >> cy >> cz >> radius >> height;
    array[i] = Cone(cx, cy, cz, radius, height);
    array[i].print();
  }

  return 0;
}