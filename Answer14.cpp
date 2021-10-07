#include <iostream>
using namespace std;


class Power
{

  public:

float base,exponent;

  void Pow(float b , int exp);


};


void Power::Pow(float b,int  exp)
{
  
 float value =1;
 float np;

  if ( exp < 0)
  {
  exp= (-1*exp);

  for (int i =1 ;i<=exp;i++)
  {
value = (value*b);


  }
np=(1/value);

  cout<<"The value of "<<b<<" raised to -"<<exp<<" is :"<<np;

  }

  else if (exp>0)
  {
    for (int i =1 ;i<=exp;i++)
  {
value = (value*b);


  }

  cout<<"The value of "<<b<<" raised to "<<exp<<" is :"<<value;

  }

  else if (exp==0)
  {
    value=1.0;

 cout<<"The value of "<<b<<" raised to "<<exp<<" is : "<<value;

  }
}


int main()
{

  Power p1;
 float X;
int  n;
  

  cout<<"\n Enter the base\n";
  cin>>X;

cout<<"\n Enter the power \n ";
cin>>n;

  p1.Pow(X,n);

  return 0;

}
