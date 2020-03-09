#include <iostream>
#include<conio.h>
using namespace std;

//A reference variable is a "reference" to an existing variable, and it is created with the & operator:

int main() {
string food = "Pizza";
string &meal = food;  //meal same as food

cout << food << "\n";  // Outputs Pizza
cout << meal << "\n";  // Outputs Pizza

//also use for save memory address of food
cout << &food; // Outputs 0x6dfed4
  return 0;
}



//Navjot Singh Prince