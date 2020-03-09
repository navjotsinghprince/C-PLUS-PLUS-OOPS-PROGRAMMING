#include <iostream>
#include<conio.h>
using namespace std;



int main() {
 int a,b,c;
	a=5;
	b=6;
	cout<<"Enter two numbers for swapping it\n";

	cin>>a;
	cin>>b;
	cout<<"\n Entered number was"<<a <<" and "<<b;

	c=a;
	a=b;
	b=c;
	cout<<"\nAfter reversing it numbers are :"<<a<<b;
  return 0;
}

//Navjot Singh Prince