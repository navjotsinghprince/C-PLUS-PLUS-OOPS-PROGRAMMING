#include <iostream>
#include<conio.h>
using namespace std;

//a Leap year, occurring once every four years, which has 366 days including 29 February as an intercalary day 

int main() {
 int year,chk;
	puts("This is used to check Leap year...");
	cout<<"Enter the year: ";
	cin>>year;

 
  year=year%4; //here is logic
  //year%=4;  //also use shorthand 
	
	switch(year) {
		case 0: 
			cout<<"This year is leap year.";
		break;

		default:
			cout<<"This year isn't leap year.";
	}
  return 0;
}

//Navjot Singh Prince