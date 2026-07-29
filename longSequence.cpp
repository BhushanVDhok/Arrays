// Problem: Longest consecutive sequence in an array
/*Given an array of n integers return the length of longest sequence of consecutive integers.*/
#include <bits/stdc++.h>
using namespace std;
int longSequence(vector<int> arr, int n){
    // initialize the longest sequnce length i.e. to store the max length found
    int longest = 1;
    unordered_set<int> st;
    // put all he array elements into set 
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    // traverse the set to find the longest sequence
    for(auto it: st){
        // check if 'it' is starting number of sequnce
        if(st.find(it - 1) == st.end()){
            // initialize count for current sequnce
            int cnt = 1;
            // starting element of the sequnce
            int x = it;

            // find consecutive numbers in the set
            while(st.find(x+1) != st.end()){
                x = x + 1;
                cnt = cnt + 1;
            }
            // update the longest sequnce length
            longest = max(longest,cnt);
        }
    }
    return longest;
}
int main(){
    vector<int> arr = {102,4,100,1,103,3,2,1,1};
    int n = arr.size();
    int ans = longSequence(arr,n);
    cout << "The length for longest consecutive sequence is: " << ans << endl;
    return 0;
}