// Problem: Rearrange array elements by sign --> Given equal number of +ve and -ve elements and we have to rearrange the array in +ve and -ve i.e in alternate order
#include <bits/stdc++.h>
using namespace std;
// Bruteforce approach
// vector<int> rearrangeArray(vector<int> &arr, int n){
//     // vector to store positive array
//     vector<int> pos;
//     // vector to store negative array
//     vector<int> neg;
//     // Stores elements in pos & neg array a/c to sign
//     for(int i=0;i<n;i++){
//         if(arr[i] > 0){
//             pos.push_back(arr[i]);
//         }
//         else{
//             neg.push_back(arr[i]);
//         }
//     }
//     // Place +ve at even indices and -ve at odd indices
//     for(int i=0;i<(n/2);i++){
//         arr[2 * i] = pos[i];
//         arr[2* i + 1] = neg[i];
//     }
//     return arr;
// }
// int main(){
//     vector<int> arr = {3,1,-2,-5,2,-4};
//     int n = arr.size();
//     vector<int> result = rearrangeArray(arr,n);
//     for(int i=0;i<n;i++){
//         cout << result[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// ----------------------------------------------------------------X-----------------------------------------------------------------
// Optimal approach
vector<int> rearrangeArray(vector<int> &arr, int n){
    // create a ans array that will store the result of size equal to arr
    vector<int> ans(n);
    // posIndex will store index for +ve number and negIndex for -ve element
    int posIndex = 0 , negIndex = 1;
    // loop through the original array
    for(int i=0;i<n;i++){
        if(arr[i] < 0){
            // place -ve numbers at odd indices
            ans[negIndex] = arr[i];
            negIndex += 2;
        }
        else{
            // place +ve numbers at positive indices
            ans[posIndex] = arr[i];
            posIndex += 2;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {3,1,-2,-5,2,-4};
    int n = arr.size();
    vector<int> result = rearrangeArray(arr,n);
    for(int i=0;i<n;i++){
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}