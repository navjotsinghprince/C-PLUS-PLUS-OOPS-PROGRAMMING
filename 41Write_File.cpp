#include <iostream>
#include <fstream>
#include<conio.h>
using namespace std;
/*******************
ofstream	Creates and writes to files
ifstream	Reads from files
fstream	    A combination of ofstream and ifstream: creates, reads, and writes to files
***************************/
//To write to the file, use the insertion operator (<<) like operator overloading
int main() {

  // Create and open a text file
  ofstream MyFile("myfile.txt");

  // Write to the file
  MyFile << "Files can be tricky, but it is fun enough!";

  // Close the file
  MyFile.close();
  
  return 0;
}

//Navjot Singh Prince