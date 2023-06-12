#include <bits/stdc++.h>
using namespace std;
int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int xr = 0;
    int n = arr.size();
    map<int,int>mpp;
    int cnt = 0;
    mpp[xr]++;
    for(int i=0;i<n;i++){
        xr = xr ^ arr[i];
        int a = xr ^ x;
        cnt += mpp[a];
        mpp[xr]++; 
    }
    return cnt;
}
int main(){
    return 0;
}