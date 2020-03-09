#include <iostream>
#include<conio.h>
using namespace std;

//derived class (child) - the class that inherits from another class
//base class (parent) - the class being inherited from
//To inherit from a class, use the : symbol.

// Base class
class Vehicle {
  public:
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public:
    string model = "Mustang";
};

int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}

//Navjot Singh Prince