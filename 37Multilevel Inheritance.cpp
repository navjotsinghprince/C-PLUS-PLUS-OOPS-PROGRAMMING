#include <iostream>
#include<conio.h>
using namespace std;

//A class can also be derived from one class, which is already derived from another class.
//MyGrandChild is derived from class MyChild (which is derived from MyClass).

// Base class (parent)
class MyClass {
  public:
    void myFunction() {
      cout << "hi! prince there is a call for you. from base class" ;
    }
};

// Derived class (child)
class MyChild: public MyClass {
};

// Derived class (grandchild)   //this is called multilevel inheritance
class MyGrandChild: public MyChild {
};

int main() {

  MyGrandChild myObj;
  myObj.myFunction();
  return 0;
}

//Navjot Singh Prince