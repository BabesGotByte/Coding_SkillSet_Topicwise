#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int uniquePath(int m,int n)
{
    if(m == 1 || n == 1)
    return 1;
    return uniquePath(m-1,n) + uniquePath(m,n-1);
}

int main() 
{
    
    int m ,n;
    cout<<"Enter Grid Dimensions : "<<endl;
    cin>>m>>n;
    
    cout<<"Number of unique path for grid of "<<m<<" x "<<n<<" = "<<uniquePath(m,n);
  return 0;
}


