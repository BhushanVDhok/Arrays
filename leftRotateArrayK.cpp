// Problem : left rotate an array by K positions

#include <bits/stdc++.h>
using namespace std;
// Helper function to reverse the array
void reverseArr(vector<int> &arr, int i, int j){
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
vector<int> leftRotateArrayK(vector<int> &arr, int n, int k){

    // firstly reverse the first half starting from 0 to k
    reverseArr(arr , 0 , k - 1);

    // next reversing k to n-1
    reverseArr(arr , k ,  n - 1);

    // at last reversing the entire array
    reverseArr(arr , 0 , n - 1);

    return arr;
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
     
    vector<int> result = leftRotateArrayK(arr , n , 2);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;

}
