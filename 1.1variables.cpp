#include <iostream>
#include<conio.h>
using namespace std;

//int - stores integers (whole numbers), without decimals, such as 123 or -123
//double - stores floating point numbers, with decimals, such as 19.99 or -19.99
//char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
//string - stores text, such as "Hello World". String values are surrounded by double quotes
//bool - stores values with two states: true or false


int main() {

 int myNum = 5;               // Integer (whole number without decimals)
double myFloatNum = 5.99;    // Floating point number (with decimals)
char myLetter = 'D';         // Character
string myText = "Hello";     // String (text)
bool myBoolean = true;       // Boolean (true or false)

//use the const keyword (this will declare the variable as "constant", which means unchangeable and read-only):
const int myNum = 15;  // myNum will always be 15
myNum = 10;  // error: assignment of read-only variable 'myNum'

cout << "My id number is: " << myNum<< ".";
cout << "\nfloat number is: " << myFloatNum << " .";
cout << "\nletter is: " << myLetter<< " .";
cout << "\ntext is : " << myText<< " .";
cout << "\nboolean value is: " << myBoolean<< " .";


  return 0;
}