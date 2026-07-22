// Problem: Maximum consecutive ones
#include <bits/stdc++.h>
using namespace std;
int maxConsecutiveOnes(vector<int> &arr, int n){
    int maxi = 0;
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == 1){
            cnt++;
            maxi = max(maxi , cnt);
        }
        else{
            cnt = 0;
        }
    }
    return maxi;
}
int main(){
    vector<int> arr = {0,1,1,1,1,0,0,1};
    int n = arr.size();
    cout << "The max consecutive ones are: " << maxConsecutiveOnes(arr,n) << endl;
}