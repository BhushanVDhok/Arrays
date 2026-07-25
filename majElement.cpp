// Problem: Find the majority element 
// "A majority element refers to the element i.e. appearing more than (n/2) times in the whole array where n is size of the array."
#include <bits/stdc++.h>
using namespace std;
// Bruteforce approach
int majorityElement(vector<int> &arr, int n){
    for(int i=0;i<n;i++){
        // count the frequnecy (i.e. how many times the no is appearing) of the element in the array
        int freq = 0;

        // count the frequency of arr[i] in the array
        for(int j=0;j<n;j++){
            if(arr[j] == arr[i]){
                freq++;
            }
        }
        if(freq > (n/2)){
            return arr[i];
        }
    }
    // If no majority element found we can return -1
    return -1;
}
int main(){
    vector<int> arr = {2,2,1,1,2};
    int n = arr.size();
    cout << "Majority Element is: " << majorityElement(arr, n) << endl;
    return 0;
}

// ------------------------------------------------X-------------------------------------------------
// Better aproach 
int majorityElement(vector<int> &arr, int n){
    // sort the entire array
    sort(arr.begin() , arr.end());
    // Assume frequency is 1 at starting and our result as first element
    int freq = 1, ans = arr[0];
    for(int i=0;i<n;i++){
        // if current element is equal to previous element then update frequency 
        if(arr[i] == arr[i-1]){
            freq++;
        }
        else{
            freq = 1;
            ans = arr[i];
        }
        if(freq > (n/2)){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {2,2,1,1,2};
    int n = arr.size();
    cout << "Majority Element is: " << majorityElement(arr, n) << endl;
    return 0;
}
// ------------------------------------------------X-------------------------------------------------

// Optimal approach --> Moore's Voting algorithm
int majorityElement(vector<int> &arr, int n){
    // freq will be used as a counter and ans variable as our majority element
    int freq = 0, ans = 0;
    for(int i=0;i<n;i++){
        if(freq == 0){
            ans = arr[i];
        }
        if(ans == arr[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    // checking if the stored element is the majority element
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == ans){
            cnt++;
        }
    }
    if(cnt > (n/2)){
        return ans;
    }
    else{
         return -1;
    }
}
int main(){
    vector<int> arr = {1,2,1,1,2};
    int n = arr.size();
    cout << "Majority Element is: " << majorityElement(arr, n) << endl;
    return 0;
}