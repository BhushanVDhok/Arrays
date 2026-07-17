// Problem: count how many times a given element appears.

// Bruteforce approach --> using a variable cnt
#include <bits/stdc++.h>
using namespace std;
int countFrequency(int arr[], int n, int el)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == el)
        {
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    int arr[] = {1, 1, 1, 1, 1};
    int n = 5;
    int result = countFrequency(arr, n, 1);
    cout << "The element is appearing " << result << " times" << endl;
    return 0;
}
// ------------------------------------------------------------X--------------------------------------------------------------

// Optimal approach --> using hashing
int countFrequency(int arr[], int n, int el){
    // Only the values from zero to 10 will be consider in this hash for values greater than 10 update the hash 
    int hash[10] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]] += 1;
    }
    return hash[el];
}
int main()
{
    int arr[] = {2, 0, 0, 0, 9};
    int n = 5;
    int result = countFrequency(arr, n, 0);
    cout << "The element is appearing " << result << " times" << endl;
    return 0;
}