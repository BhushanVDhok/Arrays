//Problem: Counting how many elements are positive, negative or zero in an array
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int pos=0, neg=0, zero=0;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            zero++;
        }
        else if(arr[i] < 0){
            neg++;
        }
        else{
            pos++;
        }
    }
    cout << endl;
    cout << "The no of positive elements are: " << pos << endl;
    cout << "The no of negative elements are: " << neg << endl;
    cout << "the no of zeroes are: " << zero << endl;
}