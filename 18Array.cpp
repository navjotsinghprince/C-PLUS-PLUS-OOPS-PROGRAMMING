#include <iostream>
#include<conio.h>
using namespace std;

//Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
//Array indexes start with 0: [0] is the first element. [1] is the second element, etc.

int main() {
 string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cout << cars[0]; // Outputs Volvo


//Change an Array Element
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cars[0] = "Opel";
cout << cars[0];
// Now outputs Opel instead of Volvo

//Loop Through an Array
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
for(int i = 0; i < 4; i++) {
  cout << i << ": " << cars[i] << "\n";
}

//Omit Array Size
string cars[] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

//Omit Elements on Declaration
string cars[5];
  cars[0] = "Volvo";
  cars[1] = "BMW";
  cars[2] = "Ford";
  cars[3] = "Mazda";
  cars[4] = "Tesla";
  for(int i = 0; i < 5; i++) {
    cout << cars[i] << "\n";
  }
  
  return 0;
}

//Navjot Singh Prince