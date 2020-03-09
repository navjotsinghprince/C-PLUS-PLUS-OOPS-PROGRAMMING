#include <iostream>
#include<conio.h>
using namespace std;

//The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class). If you want others to read or modify the value of a private member, you can provide public get and set methods

class Employee {
  private:
    // Private attribute
    int salary;

  public:
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    // Getter
    int getSalary() {
      return salary;
    }
};
int main() {

  Employee myObj;
  myObj.setSalary(50000);
  cout << myObj.getSalary();
  
  return 0;
}

//Navjot Singh Prince