// Program to find Majority
// element in an array (X > N/2)

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

    if (maxCount > (n / 2))
        cout << "Majority Element (X>N/2) in Array " << arrNum << " is: " << arr[index] << endl;

    else
        cout << "No Majority Element (X>N/2) in Array " << arrNum << endl;
}

int main()
{
    int arr[] = {1, 1, 2, 1, 3, 5, 1};
    int arr2[] = {1, 7, 7, 3, 7, 9, 7, 2, 7, 7};
    int arr3[] = {9, 1, 7, 9, 3, 9, 2, 4, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    findMajority(arr, n, 1);
    findMajority(arr2, n2, 2);
    findMajority(arr3, n3, 3);

    return 0;
}
