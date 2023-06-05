#include <bits/stdc++.h>
using namespace std;
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int maxprofit = 0;
    int buy_stock = INT_MAX;
    int n = prices.size();
    for(int i=0; i<n; i++){
        buy_stock = min(buy_stock,prices[i]);
        maxprofit = max(maxprofit,prices[i]-buy_stock);
    }
    return maxprofit;
}
int main(){
    vector<int>prices = {17 ,20 ,11 ,9 ,12 ,6};
    int ans = maximumProfit(prices);
    cout<<"The maximum profit gained is: "<<ans<<endl;
}