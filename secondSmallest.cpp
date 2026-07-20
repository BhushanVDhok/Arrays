// Problem: Finding second smallest element in an array

// Bruteforce approach
// 1.Sort the entire array
// 2.Second smallest element will be arr[1] --> second position of the array
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
    cout << "The second smallest element will be: " << arr[1] << endl;
}

// -------------------------------------------------------------------X-------------------------------------------------------------------------
// Optimal approach
int secondSmallest(int arr[], int n)
{
    int small = INT_MAX;
    int second_smallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            second_smallest = small;
            small = arr[i];
        }
        else if (arr[i] < second_smallest && arr[i] != small)
        {
            second_smallest = arr[i];
        }
    }
    return second_smallest;
}
int main()
{
    int arr[] = {-1, 8, 0, -2, 1};
    int n = 6;
    int result = secondSmallest(arr, n);
    cout << "The second smallest element in an array is: " << result << endl;
    return 0;
}