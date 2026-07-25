// Problem: Two sum / pair sum --> Find a pair that result into a target sum
#include <bits/stdc++.h>
using namespace std;
// Bruteforce approach 
// 1.Check all pairs if they are equal to target sum
// 2.Return the pair as __make_1st_indices
// 3.If pair does not found return -1 or a message "pair does not exist"
vector<int> twoSum(vector<int> &arr, int n, int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] + arr[j] == target){
                return {i,j};
            }
        }
    }
    return {-1,-1};
    
}
int main(){
    vector<int> arr = {2, 7, 11, 15};
    int n = arr.size();
    vector<int> ans = twoSum(arr,n,17);
    cout << "[" << ans[0] << "," << ans[1] << "]" << endl;
    return 0;
}

// ----------------------------------------------------X----------------------------------------------------

// Better approach --> using hashmap
vector<int> twoSum(vector<int>& arr, int n, int target){
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        int first = arr[i];
        int second = target - first;
        //    if the second element is already present in the map return the pair
        if(mp.find(second) != mp.end()){
            return {mp[second],i};
        }
        //    if the second element is not encountered in the map store first in the map
        mp[first] = i;
    }
    return {-1,-1};
}
int main(){
    vector<int> arr = {2, 7, 11, 15};
    int n = arr.size();
    vector<int> ans = twoSum(arr,n,11);
    cout << "[" << ans[0] << "," << ans[1] << "]" << endl;
    return 0;
}

// ---------------------------------------------------X-----------------------------------------------------
// Optimal approach --> using two pointers
// 1.Sort the array
// 2.find pair which is equal target 
// 3.if target greater then increament the first pointer 
// 4.If target smaller decreament the second pointer

vector<int> twoSum(vector<int>& arr, int n, int target){
    sort(arr.begin(), arr.end());
    int i = 0;
    int j =  n - 1;
    while(i < j){
        // Store the sum of first and second element
        int sum = arr[i] + arr[j];
        if(target > sum){
            i++;
        }
        else if(target < sum){
            j--;
        }
        else{
            return {i,j};
        }
    }
    return {-1,-1};
}

int main(){
    vector<int> arr = {2, 7, 11, 15};
    int n = arr.size();
    vector<int> ans = twoSum(arr,n,11);
    cout << "[" << ans[0] << "," << ans[1] << "]" << endl;
    return 0;
}