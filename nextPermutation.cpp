// Problem: Next Permutation
/*Given an array of integers, rearange the numbers of the given array into the lexicographically next greater permutation of numbers*/

#include <bits/stdc++.h>
using namespace std;

// using built in STL function 
vector<int> nextPermutation(vector<int> &arr, int n){
    next_permutation(arr.begin() , arr.end());
    return arr;
}
int main(){
    vector<int> arr = {2,1,3};
    int n = arr.size();
    vector<int> result = nextPermutation(arr,n);
    cout << "Next Permutation: " << endl;
    for(int i=0;i<n;i++){
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}

// ----------------------------------------------------------------X------------------------------------------------------------------

// Optimal approach
vector<int> nextPermutation(vector<int> &arr, int n){
    // set index to -1 that doesn't point to any element in the array
    int idx = -1;
    // find the first decreasing element from end
    for(int i=n-2;i>=0;i--){
        // if a smaller element found store its index in idx
        if(arr[i] < arr[i + 1]){
            idx = i;
            break;
        }
    }
    // if no index found after running the whole loop just reverse the entire array
    if(idx == -1){
        reverse(arr.begin() , arr.end());
        return arr;
    }
    // find element just greater(closer to idx) than arr[idx]
    for(int i=n-1;i>idx;i--){
        if(arr[i] > arr[idx]){
            swap(arr[i] , arr[idx]);
            break;
        }
    }
    // reverse the part after idx
    reverse(arr.begin() + idx+1 , arr.end());
    return arr;
}
int main(){
    vector<int> arr = {2,3,1};
    int n = arr.size();
    vector<int> result = nextPermutation(arr,n);
    cout << "Next Permutation: ";
    for(int i=0;i<n;i++){
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}