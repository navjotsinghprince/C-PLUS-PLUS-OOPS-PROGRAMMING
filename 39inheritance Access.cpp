#include <iostream>
#include<conio.h>
using namespace std;

// public (members of a class are accessible from outside the class)  
//private (members can only be accessed within the class). 
//The third specifier, protected, is similar to private, but it can also be accessed in the inherited class:


// Base class
class Employee {
  protected: // Protected access specifier
    int salary;
};

// Derived class
class Programmer: public Employee {
  public:
    int bonus;
	
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};
int main() {

  Programmer myObj;
  myObj.setSalary(50000);
  myObj.bonus = 15000;
  cout << "Salary: " << myObj.getSalary() << "\n";
  cout << "Bonus: " << myObj.bonus << "\n";
  return 0;
}

//Navjot Singh Prince