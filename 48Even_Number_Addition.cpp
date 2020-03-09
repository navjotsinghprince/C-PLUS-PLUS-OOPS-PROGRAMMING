#include <iostream>
#include<conio.h>
using namespace std;



int main() {

 int count,n,sum=0;

  cout<<"Enter the value for n: ";
	cin>>n;

	for(count=1;count<=n;count++) {
		if(count%2==1){  //check if number is odd
		continue; //then skip
		}
		sum+=count;
	}
	cout<<"The sum of even number is: "<<sum;
  return 0;
}

//Navjot Singh Prince