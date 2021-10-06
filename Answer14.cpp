//Objective : A simple C++ program to create Pow(X,n) to find power of a given number X

#include <iostream>

#include <stdio.h>

using namespace std;
//Creating the function to print the power of a function 
void Pow(int A,int c) //Here the information is passed on the function as parameters 
{
  int B;
B=1;
//Here,a value is initialized for the multiplier that keeps on altering until the loop turns false 
  for(int i=1;i<=c;++i)   

  {
   B=A*B;
  }
  cout<<"\nThe result is : "<<B;

}


int main()
{
  int X,n;

cout<<"\nEnter the no \n"; //Input the number whose power needs to be calculated 
cin>>X;
cout<<"\nEnter the exponent or power\n ";//Input the power to which the number must be raised.
 cin>>n;
 Pow(X,n);
 return 0;

}
