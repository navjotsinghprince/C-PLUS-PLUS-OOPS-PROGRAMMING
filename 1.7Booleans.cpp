#include <iostream>
#include<conio.h>
using namespace std;

/*************************************
Very often, in programming, you will need a data type that can only have one of two values, like:
YES / NO
ON / OFF
TRUE / FALSE
For this, C++ has a bool data type, which can take the values true (1) or false (0).
**********************/
int main() {
 //A boolean variable is declared with the bool keyword and can only take the values true or false:
bool isCodingFun = true;
bool isFoodTasty = false;
cout << isCodingFun;  // Outputs 1 (true)
cout << isFoodTasty;  // Outputs 0 (false)

//A Boolean expression is a C++ expression that returns a boolean value: 1 (true) or 0 (false).

int x = 10;
int y = 9;
cout << (x > y); // returns 1 (true), because 10 is higher than 9
cout << (10 > 9); // returns 1 (true), because 10 is higher than 9
cout << (10 == 15);  // returns 0 (false), because 10 is not equal to 15



  return 0;
}

//Navjot Singh Prince