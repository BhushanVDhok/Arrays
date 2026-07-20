// Problem: Count how many elements are even and odd in an array
#include <bits/stdc++.h>
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
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout << endl;
    cout << "The no of even elements are: " << even << endl;
    cout << "The no of odd elements are: " << odd << endl;
}