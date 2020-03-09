#include <iostream>
#include<conio.h>
using namespace std;

// public - members are accessible from outside the class
// private - members cannot be accessed (or viewed) from outside the class
// protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.
// By default, all members of a class are private if you don't specify an access specifier:
class MyClass {
  public:    // Public access specifier
    int x;   // Public attribute
  private:   // Private access specifier
    int y;   // Private attribute
};


int main() {
 MyClass myObj;
  myObj.x = 25;  // Allowed (public)
  myObj.y = 50;  // Not allowed (private) //Error Will generate
  return 0;
}

//Navjot Singh Prince