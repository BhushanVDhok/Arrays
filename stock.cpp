// Problem: Stock buy and sell  --> Given prices of stock we have to return max profit from buying and selling the stock
#include <bits/stdc++.h>
using namespace std;
int stockBuy(vector<int> &arr, int n){
    // vaiable max profit stores maximum profit gain from selling the stock
    int maxProfit = 0, bestBuy = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] > bestBuy){
            int profit = arr[i] - maxProfit;
            maxProfit = max(maxProfit , profit);
        }
         // variable bestBuy is the minimum value as a stock from the array
         bestBuy = min(bestBuy , arr[i]);

    }
    return maxProfit;
}
int main(){
    vector<int> arr = {7,1,5,3,6,4};
    int n = arr.size();
    cout << "Max profit is: " << stockBuy(arr,n) << endl;
}