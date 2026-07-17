// Problem: Finding average of all array elements 
// avg = sum of all elements / total no of elements(n)
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
    int avg = sum / n; 
    cout << "avg is: " << avg << endl;
    cout << endl;
}