#include <iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;

// Methods are functions that belongs to the class.
// There are two ways to define functions that belongs to a class:
// Inside class definition
// Outside class definition

class MyClass {          // The class
  public:                  // Access specifier
    void myMethod() {       // Method/function defined inside the class
      cout << "i m inside classs function!";
    }
    int MaxSpeed(int s); //only declaration
};

// Method/function definition outside the class
int MyClass :: MaxSpeed(int s) {
  cout << "i m outside class method";
   return s*10;
}


int main() {

  MyClass myObj; // Create an object of MyClass
  myObj.myMethod();  //call inside method
  cout << myObj.MaxSpeed(200); // Call the method with an argument
  return 0;
}

//Navjot Singh Prince