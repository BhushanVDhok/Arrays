// Problem: single number i.e find the no which is appearing only once
#include <bits/stdc++.h>
using namespace std;
// Bruteforce approach(Linear search)
int cntOccurence(vector<int> &arr){
    int n = arr.size();
    // Start from the first element
    for(int i=0;i<n;i++){
        // assume first element in num
        int num = arr[i];
        int cnt = 0;
        // if num appearing 2 times then fine
        for(int j=0;j<n;j++){
            if(arr[j] == num){
                cnt++;
            }
        }
        // if num appearing only ones just return it
         if(cnt == 1) return num;
    }
    return -1;
}
int main(){
    vector<int> arr =  {1, 1, 3, 3, 4, 4, 2};
    int ans = cntOccurence(arr);
    cout << ans << endl;
    return 0;
}
// -----------------------------------------------------X-----------------------------------------------------

// Optimal approach
 int cntOccurence(vector<int> &arr){
    int n = arr.size();
    int xorr = 0;
    for(int i=0;i<n;i++){
        xorr = xorr ^ arr[i];
    }
    return xorr;
 }
 int main(){
    vector<int> arr =  {1, 1, 2, 3, 3, 4, 4};
    cout << "The single no is: " << cntOccurence(arr) << endl;
    return 0;
 }