#include <iostream>

using namespace std;

class ParkingSystem {
  int slots[4];

public:
  ParkingSystem(int big, int medium, int small) {
    slots[1] = big;
    slots[2] = medium;
    slots[3] = small;
  }

  bool addCar(int carType) {
    if (slots[carType] > 0) {
      slots[carType]--;
      return true;
    }
    return false;
  }
};

int main() {
  ParkingSystem parkingSystem(1, 1, 0);
  cout << boolalpha;
  cout << parkingSystem.addCar(1) << endl; // true
  cout << parkingSystem.addCar(2) << endl; // true
  cout << parkingSystem.addCar(3) << endl; // false
  cout << parkingSystem.addCar(1) << endl; // false

  return 0;
}