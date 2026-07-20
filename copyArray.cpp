// Problem: copy one array into another manually
#include <bits/stdc++.h>
using namespace std;
vector<int> copyArray(vector<int> arr, int n)
{
    // created a temp array that will store all elements from original array
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        temp.push_back(arr[i]);
    }
    return temp;
}
int main()
{
    // original array
    vector<int> arr = {1, 0, 1, 0, 0, 0, 0};
    int n = arr.size();
    vector<int> result = copyArray(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}