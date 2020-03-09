#include <iostream>
#include <string>
#include<conio.h>
using namespace std;

//A string variable contains a collection of characters surrounded by double quotes:

int main() {
 string greeting = "My Name is Prince";
 cout<<greeting;

//The + operator can be used between strings to add them together to make a new string. This is called concatenation:
string firstName = "Navjot ";
string lastName = "Singh";
string fullName = firstName + lastName;
cout << fullName;

//Remember
string x = "10";
string y = "20";
string z = x + y;   // z will be 1020 (a string)

//If you try to add a number to a string, an error occurs:
string x = "10";
int y = 20;
string z = x + y;  //it will generate error msg

// You might see some C++ programs that use the size() function to get the length of a string. This is just an alias of length(). It is completely up to you if you want to use length() or size():
string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "The length of the txt string is: " << txt.length();


//C++ Access Strings
// access the characters in a string by referring to its index number inside square brackets []
//String indexes start with 0: [0] is the first character. [1] is the second character, etc.

string myString = "PRINCE";
cout << myString[0]; // Outputs P

//Change String Characters
string myString = "PRINCE";
myString[0] = 'N';
cout << myString;  // Outputs NRINCE instead of PRINCE

//C++ User Input Strings
string firstName;
cout << "Type your first name: ";
cin >> firstName; // get user input from the keyboard
cout << "Your name is: " << firstName;
// Type your first name: navjot
// Your name is: navjot

//ANother Example
//However, cin considers a space (whitespace, tabs, etc) as a terminating character, which means that it can only display a single word (even if you type many words):
//when working with strings, we often use the getline() function to read a line of text. It takes cin as the first parameter, and the string variable as second:

string fullName;
cout << "Type your full name: ";
getline (cin, fullName);
cout << "Your name is: " << fullName;

// Type your full name: Navjot Singh
// Your name is: Navjot Singh 




  return 0;
}



//Navjot Singh Prince