//Display the number in reverse order
//fix and complete the program below.

#include<iostream>
#include<conio.h>
using namespace std;

  int main()
  {
   int no,rev=0,r,a;
   cout<<"Enter ascending number: ";
   cin>>no;
   a=no;
   for(;no>0;)
   {
    r=no%10;
    rev=rev*10+r;
    no=no/10;
   }
  cout<<"\nReverse of "<<a<<" is: "<<rev;
  getch();
 }
