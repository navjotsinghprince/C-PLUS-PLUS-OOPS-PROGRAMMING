#include <iostream>
#include<conio.h>
using namespace std;


//In the case of an Armstrong number of 3 digits, the sum of cubes of each digit is equal to the number itself. For example, 153 is an Armstrong number because
//153 = 1*1*1 + 5*5*5 + 3*3*3 

int main() {
 	/* Check armstrong */
	int num,temp,sum=0,r; 
	cout<<"\n Please enter a number:";
	cin>>num;
	temp = num; 

	while(num>0){
		r=num%10;
		sum =  sum+(r*r*r);
		num = num/10; 
	}
	if(temp==sum){
		cout<<"Yes"<<temp<<"is a Armstrong Number";
	}else{
	   cout<<"No"<<temp<<"is a Not a Armstrong Number";
    }
  return 0;
}

// g++ 45Armstrong_Number_Check.cpp
//Navjot Singh Prince