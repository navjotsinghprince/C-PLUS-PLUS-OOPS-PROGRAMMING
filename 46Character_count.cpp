#include <iostream>
#include<conio.h>
using namespace std;



int main() {

  char c[100],ch;
   int i,count=0;
   cout<<"Enter a string:";
   gets(c);
   cout<<"Enter a characeter to find frequency: ";
   cin>>ch;
   for(i=0;c[i]!='\0';++i)
   {
       if(ch==c[i])
          count++;
   }
   cout<<"Frequency of: "<<ch<<" = "<<count;
  return 0;
}

//Navjot Singh Prince