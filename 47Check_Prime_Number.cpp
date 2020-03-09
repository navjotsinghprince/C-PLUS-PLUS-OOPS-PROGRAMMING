#include <iostream>
#include<conio.h>
using namespace std;

//Prime numbers are divisible only by the number 1 or itself. 
//For example, 2, 3, 5, 7 and 11 are the first few prime numbers.

int main() {
 int n,i,m=0,flag=0;   
cout<<"Enter the number to check prime:";  
cin>>n;  
m=n/2; 

for(i=2;i<=m;i++){  
if(n%i==0)  
{  
cout<< "Number is not prime";  
flag=1;  
break;  
}  
}if(flag==0)  
cout<< "Number is prime";   
  return 0;
}

//Navjot Singh Prince