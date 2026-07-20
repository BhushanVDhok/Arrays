// Problem: reverse an array

// Bruteforce approach
// 1.Creating a temp array
// 2.Copy all elements from original array to temp array
// 3.Start looping from back on the temp array and print it
#include <bits/stdc++.h>
using namespace std;
vector<int> reverseArray(vector<int> arr, int n)
{
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        temp.push_back(arr[i]);
    }
    return temp;
}
int main()
{
    vector<int> arr = {0, 1, 2, 3, 4, 5, 6};
    int n = arr.size();
    vector<int> result = reverseArray(arr, n);
    for (int i = n - 1; i >= 0; i--)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}

// ----------------------------------------------X----------------------------------------------------

// Optimal approach --> Two pointers
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
    cout << endl;
    int i = 0, j = n - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    cout << "Reverse array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}