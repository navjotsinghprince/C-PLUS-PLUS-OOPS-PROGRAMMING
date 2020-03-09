#include <iostream>
#include <conio.h>
using namespace std;

//The Do/While loop will always be executed at least once, even if the condition is false, because the code block is executed before the condition is tested:
int main() {
 int i = 0;
do {
  cout << i << "\n";
  i++;
}
while (i < 5);
  return 0;
}

//Navjot Singh Prince