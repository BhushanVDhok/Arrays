// Problem: Create an array --> input n and take n integers into array --> print them.
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
    cout << "Array elements are: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}