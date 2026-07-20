// Problem: Finding max element from given array
#include <bits/stdc++.h>
using namespace std;
int maxElement(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[] = {-9, -2, -1, -11, -8};
    int n = 5;
    int max = maxElement(arr, n);
    cout << "Maximum element from the given array is: " << max << endl;
}