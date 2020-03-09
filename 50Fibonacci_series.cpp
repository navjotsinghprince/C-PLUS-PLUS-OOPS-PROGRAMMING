#include <iostream>
#include<conio.h>
using namespace std;
int fib(int);

int Fib(int n) {
      if (n==1 || n==2){
          return (1);
        }
      else{
        return (Fib(n-1)+Fib(n-2)); //Use Recursion logic
    }
}

int main() {
 int n,i;
  cout<<"Enter a positive integer For Fibonacci Series: ";
  cin>>n;
  for (i=1; i<=n; i++){
   cout<< Fib(i); //call function according to numbers
  }
  return 0;
}

//Navjot Singh Prince