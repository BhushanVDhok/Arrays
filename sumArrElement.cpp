//Problem: Finding the sum of all elements in an array.
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
   
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
     cout << "Sum of array elements is: "<< sum << endl; 
    cout << endl;
}