#include <iostream>
#include<conio.h>
using namespace std;


//A pointer is a variable that stores the memory address as its value.
int main() {
string food = "Pizza";  // A food variable of type string
string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

// Output the value of food (Pizza)
cout << food << "\n";

// Output the memory address of food (0x6dfed4)
cout << &food << "\n";

// Output the memory address of food with the pointer (0x6dfed4)
cout << ptr << "\n";

cout<< *ptr<<"\n"; //Dereference: Output the value of food with the pointer (Pizza)

//When used in declaration (string* ptr), it creates a pointer variable.
//When not used in declaration, it act as a dereference operator.


  return 0;
}

//Navjot Singh Prince