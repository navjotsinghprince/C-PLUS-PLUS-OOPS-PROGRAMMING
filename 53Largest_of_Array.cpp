#include <iostream>
#include<conio.h>
using namespace std;



int main() {
 int i,a[5],largest;

	cout<<"Enter the values of array";
	for(i=0;i<5;i++) {
		cin>>a[i];
	}

	cout<<"The array value are: ";
	for(i=0;i<5;i++) {
		cout<<"\n"<<a[i];
	}

  largest=a[0]; //store first index value
  for(i=1;i<=5;i++) {
		if(a[i]>largest) {
			largest=a[i];
		}
  }
  cout<<"\n The largest Value is: "<<largest;

  return 0;
}

//Navjot Singh Prince