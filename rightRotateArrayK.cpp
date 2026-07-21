// Problem : Right rotate an array by K positions

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
vector<int> rightRotateArrayK(vector<int> &arr, int n, int k){

    // firstly reverse the entire array
    reverseArr(arr , 0 , n - 1);

    // next reverse array from 0 to k-1
    reverseArr(arr , 0 ,  k - 1);

    // at last reverse the remaining array starting from k to end of the array
    reverseArr(arr , k , n - 1);

    return arr;
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
     
    vector<int> result = rightRotateArrayK(arr , n , 3);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;

}
