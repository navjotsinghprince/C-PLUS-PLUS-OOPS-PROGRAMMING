#include <iostream>
#include<conio.h>
using namespace std;

// A class can also be derived from more than one base class, using a comma-separated list is called multiple inheritance

// Base class
class MyClass {
  public:
    void FirstBaseFunction() {
      cout << "hi! prince there is a call for you. from base class" ;
    }
};

// Another base class
class MyOtherClass {
  public:
    void SecondBaseFunction() {
      cout << "hi! prince there is a call for you. from another base class ." ;
    }
};

// Derived class
class MyChildClass: public MyClass, public MyOtherClass {
};

int main() {
  MyChildClass myObj;
  myObj.FirstBaseFunction();
  myObj.SecondBaseFunction();
  return 0;
}


//Navjot Singh Prince