// Problem : Move all zeroes to end
#include <bits/stdc++.h>
using namespace std;
// Bruteforce approach
// 1. create a temp array equal to the size of the original array
// 2. store non-zero elements into this temp array
// 3. put all zeroes to end by looping on original array starting from temp array last element to end of the original array
vector<int> moveZeroesToEnd(vector<int> &arr, int n)
{
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
    }
    for (int i = 0; i < temp.size(); i++)
    {
        arr[i] = temp[i];
    }
    for (int i = temp.size(); i < n; i++)
    {
        arr[i] = 0;
    }
    return arr;
}
int main()
{
    vector<int> arr = {1, 1, 1, 1, 1, 0, 0, 1, 1, 1};
    int n = 10;
    vector<int> result = moveZeroesToEnd(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}

// ----------------------------------------------------X----------------------------------------------------

// Optimal approach
vector<int> moveZeroesToEnd(vector<int> &arr, int n)
{
    int j = -1;

    // finding first zero
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            // if found zero give that position to j and break
            j = i;
            break;
        }
    }

    // start looping from next index of the first zero
    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    return arr;
}
int main()
{
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = 10;

    vector<int> result = moveZeroesToEnd(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}