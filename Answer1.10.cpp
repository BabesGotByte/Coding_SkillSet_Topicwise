#include <iostream>

// Merge two sorted arrays and reverse the result
void mergeAndReverse(int arr[], int left[], int right[], int leftSize, int rightSize)
{
    int i = 0, j = 0, k = 0;

    while (i < leftSize && j < rightSize)
    {
        if (left[i] >= right[j])
        {
            arr[k++] = left[i++];
        }
        else
        {
            arr[k++] = right[j++];
        }
    }

    while (i < leftSize)
    {
        arr[k++] = left[i++];
    }

    while (j < rightSize)
    {
        arr[k++] = right[j++];
    }
}

// Merge Sort with inversion
void mergeSortAndReverse(int arr[], int size)
{
    if (size <= 1)
    {
        return; // Base case: already sorted
    }

    int mid = size / 2;
    int left[mid];
    int right[size - mid];

    // Copy elements to left and right subarrays
    for (int i = 0; i < mid; i++)
    {
        left[i] = arr[i];
    }

    for (int i = mid; i < size; i++)
    {
        right[i - mid] = arr[i];
    }

    // Recursively sort and reverse the subarrays
    mergeSortAndReverse(left, mid);
    mergeSortAndReverse(right, size - mid);

    // Merge the sorted subarrays and reverse the result
    mergeAndReverse(arr, left, right, mid, size - mid);
}

int main()
{
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original Array: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }

    mergeSortAndReverse(arr, size);

    std::cout << "\nReversed Array: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}
