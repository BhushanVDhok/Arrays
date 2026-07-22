// Problem : Missing number in an array 
#include <bits/stdc++.h>
using namespace std;
// Bruteforce approach (Linear Search)
int missingNumber(vector<int> &arr){
    int n = arr.size() + 1;
    // if the current number is present we can return true
    for(int i=1;i<=n;i++){
        bool flag = false;
        for(int j=0;j<n-1;j++){
            if(arr[j] == i){
                flag = true;
                break;
            }
        }
        // if the current number is not present
        if(!flag) return i;
    }
    return -1;
}
int main(){
    vector<int> arr = {1, 2, 4, 5};
    cout << "The missing no is: " << missingNumber(arr) << endl;
    return 0;
}

// ----------------------------------------------------X----------------------------------------------------
// Better approach(Hashing)
int missingNumber(vector<int> &arr){
    // assuming the array is missing a piece of data or we are allocating space for that new element 
    int n = arr.size() + 1;
    int hash[n + 1] = {0};
//     // assigning 1 to a number which is appearing in the given array
    for(int i=0;i<n-1;i++){
        hash[arr[i]] = 1;
    }
//     // The no which doesn't assign 1 will be the missing no
    for(int i=1;i<n;i++){
        if(hash[i] == 0){
            return i;
        }
    }
    return -1;

}
int main(){
    vector<int> arr = {1, 2, 4, 5};
    cout << "The missing no is: " << missingNumber(arr) << endl;
    return 0;
}

// -----------------------------------------------------X----------------------------------------------------
//1. Optimal approach (using sum of n terms formula)
int missingNumber(vector<int> & arr){
    int n = arr.size() + 1;
    int sum = 0;
    for(int i=0;i<n-1;i++){
        sum = sum + arr[i];
    }
    int expSum = (n * (n + 1) / 2);
    return expSum - sum;
}
int main(){
    vector<int> arr = {8, 7, 5, 3, 2, 4, 6};
    cout << "the missing no is: " << missingNumber(arr) << endl;
    return 0;

}

// 2.Optimal approach(using XOR operation)
