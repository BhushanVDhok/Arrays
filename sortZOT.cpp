//Problem: Sort an array of 0's , 1's & 2's 

#include <bits/stdc++.h>
using namespace std;
// Bruteforce approach 
// 1.Initialize three different counters for 0, 1 and 2
// 2.Increament the counters a/c to numbers 
// 3.Run a loop for entire array to put all the elements into it
vector<int> sortZOT(vector<int> &arr, int n){
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    //First pass: count the no of 0's, 1's & 2's
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            cnt0++;
        }
        else if(arr[i] == 1){
            cnt1++;
        }
        else{
            cnt2++;
        }
    }
    // second pass: Fill the array wih 0's then 1's and eventually with 2's
    for(int i=0;i<cnt0;i++){
        arr[i] = 0;
    }
    for(int i=cnt0;i<cnt0+cnt1;i++){
        arr[i] = 1;
    }
    for(int i=cnt0+cnt1;i<n;i++){
        arr[i] = 2;
    }
    return arr;
}
int main(){
    vector<int> arr = {2,0,0,2,2,0,1,1,1};
    int n = arr.size();
    vector<int> result = sortZOT(arr,n);
    for(int i=0;i<n;i++){
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}

// ------------------------------------------------X-------------------------------------------------

// Optimal approach 
vector<int> sortZOT(vector<int> &arr, int n){
    // Initialize three different pointers two at startig index and third at end og the array
    int low = 0, mid = 0, high = n - 1;
    // Until mid reaches 
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low] , arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid] , arr[high]);
            high--;
        }
    }
    return arr;
}
int main(){
     vector<int> arr = {2,0,0,0,1,1,1};
     int n = arr.size();
     vector<int> result = sortZOT(arr,n);
     for(int i=0;i<n;i++){
        cout << result[i] << " ";
     }
     cout << endl;
     return 0;
}
