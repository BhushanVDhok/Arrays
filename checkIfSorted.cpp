// Problem: check if array is sorted in ascending order or not.

#include <bits/stdc++.h>
using namespace std;
bool checkIfSorted(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // If current element is not smaller than its next element then return false
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int result = checkIfSorted(arr, n);
    if (result)
    {
        cout << "Array is sorted in ascending order." << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }
    cout << endl;
    return 0;
}