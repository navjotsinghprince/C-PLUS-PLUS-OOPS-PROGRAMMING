#include <iostream>
#include <fstream>
#include<conio.h>
using namespace std;
/*******************
ofstream	Creates and writes to files
ifstream	Reads from files
fstream	    A combination of ofstream and ifstream: creates, reads, and writes to files
***************************/

int main() {

  // Create a text string, which is used to output the text file
string myText;

// Read from the text file
ifstream MyReadFile("myfile.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
  // Output the text from the file
  cout << myText;
}

// Close the file
MyReadFile.close();
  
  return 0;
}

//Navjot Singh Prince