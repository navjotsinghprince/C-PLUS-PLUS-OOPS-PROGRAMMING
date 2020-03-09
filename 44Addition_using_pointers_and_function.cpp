#include <iostream>
#include<conio.h>
using namespace std;

void Add(int *p,int *q){
	
	cout << "Addition is :" << *p+*q;
}

int main() {
 int x,y; 
  cout << "Enter in 2 numbers " << endl;
   cin >> x;
   cin >> y;

    Add(&x,&y);
  return 0;
}

//Navjot Singh Prince