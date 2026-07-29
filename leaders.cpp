// Problem: Leaders in an array --> A leader in an element i.e greater than every element to its right

#include <bits/stdc++.h>
using namespace std;
// Bruteforce approach
vector<int> leaderInArray(vector<int> &arr, int n)
{
    vector<int> ans; 
    for (int i = 0; i < n; i++)
    {
        bool leader = true;
        for (int j = i + 1; j < n; j++)
        {
            // check whether every element in the array is greater than all elements to its right  
            if (arr[j] >= arr[i])
            {
                // if any element to the right is greater or equal, arr[i] will not be the leader
                leader = false;
                break;
            }
        }
        // if arr[i] is a leader then add it to ans vector 
        if (leader)
        {
            ans.push_back(arr[i]);
        }
    }
    // return the leaders
    return ans;
}
int main()
{
    vector<int> arr = {10, 22, 12, 3, 0, 6};
    int n = arr.size();
    vector<int> ans = leaderInArray(arr, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}

// -----------------------------------------------------------------X------------------------------------------------------------------

// Optimal approach
vector<int> leaderInArray(vector<int> &arr, int n){
    vector<int> ans;
    int maxi = 0;
    // check elements from right to left
    for(int i=n-1;i>=0;i--){
        if(arr[i] > maxi){
            ans.push_back(arr[i]);
            maxi = arr[i];
        }
    }
    // if it is asked to give answer array in sorted manner then sort the array or reverse it.
    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{
    vector<int> arr = {10, 22, 12, 3, 0, 6};
    int n = arr.size();
    vector<int> ans = leaderInArray(arr, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
