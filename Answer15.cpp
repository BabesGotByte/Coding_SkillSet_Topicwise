#include <iostream>

using namespace std;

int main()
{
    /*
    Input Format:
    First line: Number of elements in array
    Second line: Elements of the array
    eg:
    7
    1 2 3 3 3 1 3

    Output Format:
    Majority Element (if it exists)
    "Does not exist" if majority element does not exist
    */
    int n;
    cin>>n;             
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    int count[n]={0};
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(arr[i]==arr[j])
            {
                count[i]++;
            }
        }
        if(count[i]>=(n/2+1))
        {
            cout<<arr[i];
            return 0;
        }
    }
    cout<<"Does not exist\n";
    return 0;
}