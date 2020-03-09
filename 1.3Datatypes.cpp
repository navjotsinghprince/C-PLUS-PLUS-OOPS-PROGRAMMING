#include <iostream>
#include<conio.h>
using namespace std;


/*
Data Type	Size	Description
int	      4 bytes	Stores whole numbers, without decimals
float	  4 bytes	Stores fractional numbers,containing one or more decimals.Sufficient for storing 7 decimal digits
double	  8 bytes	Stores fractional numbers,containing one or more decimals.Sufficient for storing 15decimal digits
boolean	  1 byte	Stores true or false values
char	  1 byte	Stores a single character/letter/number, or ASCII values
*/
int main() {
 int myNum = 5;               // Integer (whole number without decimals)
double myFloatNum = 5.99;    // Floating point number (with decimals)
char myLetter = 'D';         // Character
string myText = "Hello";     // String (text)
bool myBoolean = true;       // Boolean (true or false)


cout << "My id number is: " << myNum<< ".";
cout << "\nfloat number is: " << myFloatNum << " .";
cout << "\nletter is: " << myLetter<< " .";
cout << "\ntext is : " << myText<< " .";
cout << "\nboolean value is: " << myBoolean<< " .";
  return 0;
}

//Navjot Singh Prince