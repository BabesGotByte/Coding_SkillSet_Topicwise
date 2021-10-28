// Program to find Majority
// element in an array (X > N/3)

#include <iostream>
using namespace std;

void findMajority(int arr[], int n, int arrNum)
{
    int maxCount = 0;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > maxCount)
        {
            maxCount = count;
            index = i;
        }
    }

    if (maxCount > (n / 3))
        cout << "Majority Element (X>N/3) in Array " << arrNum << " is: " << arr[index] << endl;

    else
        cout << "No Majority Element (X>N/3) in Array " << arrNum << endl;
}

int main()
{
    int arr[] = {1, 2, 2, 1, 2, 2, 1};
    int arr2[] = {1, 2, 3, 1, 4, 1};
    int arr3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    findMajority(arr, n, 1);
    findMajority(arr2, n2, 2);
    findMajority(arr3, n3, 3);

    return 0;
}
