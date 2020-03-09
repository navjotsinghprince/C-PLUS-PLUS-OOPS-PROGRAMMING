#include <iostream>
#include<conio.h>
using namespace std;



int main() {
  int i,f=1,n;
 cout<<"Please enter any number: ";
 cin>>n;
 for(i=1;i<=n;i++){
    f=f*i;
	//cout<<"\nFactorial of "<<i<<" is "<<f;  //Step by step testing
 }
 cout<<"\nFactorial of "<<n<<" is "<<f;
  return 0;
}

//Navjot Singh Prince