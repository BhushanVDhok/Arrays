// Problem: Remove duplicates from the array --> by returning index value and required array if necessary

#include <bits/stdc++.h>
using namespace std;
// Bruteforce approach -- using set
// 1.Define a set
// 2.Put all elements of array into set
// 3.Use a variable "index" that will return index value as a result
// 4.Use of auto iterator "it" that will goto each and every element of the set and put all elements into array
class Solution
{
public:
    int removeDuplicates(vector<int> &arr, int n)
    {
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            st.insert(arr[i]);
        }
        int index = 0;
        for (auto it : st)
        {
            arr[index] = it;
            index++;
        }
        return index;
    }
};
int main()
{
    vector<int> arr = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int n = 10;
    Solution sol;
    int k = sol.removeDuplicates(arr, n);
    cout << "The no of non duplicates elements are: " << k << endl;
    cout << "Required array: ";
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

// -----------------------------------------------------X----------------------------------------------------

// Optimal approach --> using two pointers
class Solution
{
public:
    int removeDuplicates(vector<int> &arr, int n)
    {
        // first pointer on starting index
        int i = 0;
        // second pointer on first index
        for (int j = i + 1; j < n; j++)
        {
            // if current element i.e. j if not equals to value pointed by i --> increament pointer i to next index and value of j will go into i
            if (arr[j] != arr[i])
            {
                i++;
                arr[i] = arr[j];
            }
        }
        // return index value or no of non-duplicates values
        return i + 1;
    }
};
int main()
{
    vector<int> arr = {1, 1, 1, 1, 1, 1, 1};
    int n = 7;
    Solution sol;
    int k = sol.removeDuplicates(arr, n);
    cout << "The no of non duplicates elements are: " << k << endl;
    cout << "Required array: ";
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}