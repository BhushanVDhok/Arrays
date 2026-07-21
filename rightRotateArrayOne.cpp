// Problem: Right rotate an array by one place
#include <bits/stdc++.h>
using namespace std;
vector<int> rightRotateArray(vector<int> &arr, int n)
{
    // stored last value inside a temporary variable
    int temp = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {

        arr[i + 1] = arr[i];
    }
    // Stored value in the temp will put into last position of the array
    arr[0] = temp;
    return arr;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;

    // storing the result of the function as array
    vector<int> result = rightRotateArray(arr, n);
    // loop through the entire array
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}