// Problem: Pinting values which are greater than given value K
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
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int K;
    cout << "Enter value of K: ";
    cin >> K;
    cout << "The values which are greater than K are ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > K)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}