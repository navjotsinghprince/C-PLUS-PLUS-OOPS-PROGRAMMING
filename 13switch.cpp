#include <iostream>
#include<conio.h>
using namespace std;

//the switch statement to select one of many code blocks to be executed.
//When C++ reaches a break keyword, it breaks out of the switch block.
//The default keyword specifies some code to run if there is no case match:

int main() {
 int day = 5;
switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";  // Outputs "Thursday" (day 4) and  break keyword save a lot of execution time 
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
   default:
    cout << "Looking forward to the Weekend Does not match";
  
}

  return 0;
}

//Navjot Singh Prince