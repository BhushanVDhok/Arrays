// Finding minimum element from given array
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
    int min = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout << "Minimum element from the given array is: " << min << endl;
}