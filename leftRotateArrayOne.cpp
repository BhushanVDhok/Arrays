// Problem: Left rotate an array by one place 
#include <bits/stdc++.h>
using namespace std;
vector<int> leftRotateArray(vector<int> &arr, int n)
{
    // Putting first value of the array in a temporary variable 
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        // starting from the second element pushing evry element to its previous position
        arr[i - 1] = arr[i];
    }
    // Stored value in the temp will put into last position of the array
    arr[n - 1] = temp;
    return arr;
}
int main()
{
    vector<int> arr = {1, 0, 1, 0, 1};
    int n = 5;

    // storing the result of the function as array
    vector<int> result = leftRotateArray(arr, n);
    // loop through the entire array 
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}