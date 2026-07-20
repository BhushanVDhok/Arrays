// Problem: Input an element X(i.e.target) --> check if it exists in the array  --> Linear Search
#include <bits/stdc++.h>
using namespace std;
bool linearSearch(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[] = {9, 0, 7, -1, 2};
    int n = 5;
    int result = linearSearch(arr, n, 8);
    if (!result)
    {
        cout << "The target element is not present in the given array.";
    }
    else
    {
        cout << "The target element is present.";
    }
}