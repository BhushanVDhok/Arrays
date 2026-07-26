// Problem : Maximum subarray sum --> Finding the suarray whose sum is max in the given array

#include <bits/stdc++.h>
using namespace std;
// Bruteforce approach
int maxSum(vector<int> &arr, int n){
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        // variable to store sum of current subarray
        int currSum = 0;
        for(int j=i;j<n;j++){
            currSum = currSum + arr[j];
            // keep track of maximum sum encountered during iteration
            maxSum = max(currSum , maxSum);
        }
    }
    return maxSum; 
}
int main(){
    vector<int> arr = {3,-4,5,4-1,7,-8};
    int n = arr.size();
    cout << "Maximum sum is: " << maxSum(arr,n) << endl;
}

// ----------------------------------------------------------------X-----------------------------------------------------------------

// Optimal approach --> Kadane's algorithm

int maxSum(vector<int> &arr, int n){
    int currSum = 0, maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        currSum = currSum + arr[i];
        maxSum = max(currSum , maxSum);
        // if currsum < 0 then reset it to zero 
        if(currSum < 0){
            currSum = 0;
        }
    }
    return maxSum; 
}
int main(){
    vector<int> arr = {3,-4,5,4-1,7,-8};
    int n = arr.size();
    cout << "Maximum sum is: " << maxSum(arr,n) << endl;
}
