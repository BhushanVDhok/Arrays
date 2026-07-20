// Problem: Finding second largest element in an array

// Bruteforce approach
// 1.Sort the entire array
// 2.Second smallest element will be arr[n-2] --> second position from the right or from the end of the array
#include <bits/stdc++.h>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Directly implemented sort function from STL
    sort(arr, arr + n);
    cout << "After sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "The second largest element will be: " << arr[n - 2] << endl;
}

// ---------------------------------------------------X----------------------------------------------------
// Optimal approach
int secondLargest(int arr[], int n)
{
    int large = INT_MIN;
    int second_largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            second_largest = large;
            large = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != large)
        {
            second_largest = arr[i];
        }
    }
    return second_largest;
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5;
    int result = secondLargest(arr, n);
    cout << "The second largest element in an array is: " << result << endl;
    return 0;
}