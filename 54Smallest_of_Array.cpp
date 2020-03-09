#include <iostream>
#include<conio.h>
using namespace std;



int main() {
 int i,a[5],Smallest;

	cout<<"Enter the values of array";
	for(i=0;i<5;i++) {
		cin>>a[i];
	}

	cout<<"The array value are: ";
	for(i=0;i<5;i++) {
		cout<<"\n"<<a[i];
	}

  Smallest=a[0]; //store first index value
  for(i=1;i<=5;i++) {
		if(a[i]<Smallest) {
			Smallest=a[i];
		}
  }
  cout<<"\n The smallest Value is: "<<Smallest;

  return 0;
}

//Navjot Singh Prince