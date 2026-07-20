// Problem: Check if all elements in an array are unique
#include <bits/stdc++.h>
using namespace std;
bool checkIfUnique(int arr[], int n)
{
    int i = 0;
    for (int j = i + 1; j < n; j++)
    {
        if (arr[i] == arr[j])
        {
            return false;
        }
        i++;
    }
    return true;
}
int main()
{
    int arr[] = {1, 2, 2, 4, 5};
    int n = 5;
    int result = checkIfUnique(arr, n);
    if (result)
    {
        cout << "Array is unique.";
    }
    else
    {
        cout << "Array is not unique.";
    }
    return 0;
}