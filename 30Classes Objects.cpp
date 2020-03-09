#include <iostream>
#include<conio.h>
using namespace std;
/***********************
C++ is an object-oriented programming language.

Everything in C++ is associated with classes and objects, along with its attributes and methods. For example: in real life, a car is an object. The car has attributes, such as weight and color, and methods, such as drive and brake.

Attributes and methods are basically variables and functions that belongs to the class. These are often referred to as "class members".

A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating obj
******************/

//To create a class, use the class keyword:-

class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

int main() {
 //Create an Object
MyClass myObj;  // Create an object of MyClass

// Access attributes and set values
  myObj.myNum = 15; 
  myObj.myString = "Prince ferozepuria";

//print values
  cout << myObj.myNum << "\n";
  cout << myObj.myString;
  return 0;
}

//Navjot Singh Prince