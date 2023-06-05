#include <bits/stdc++.h>
using namespace std;
int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  int maxi = 0;
  int sum = 0;
  int n = arr.size();
  unordered_map<int,int>mpp;
  for(int i = 0; i<n; i++){
    sum += arr[i];
    if(sum == 0){
      maxi = i+1;
    }
    else{
      if(mpp.find(sum)!=mpp.end()){
        maxi = max(maxi,(i - mpp[sum]));
      } else {
        mpp[sum] = i;
      }
    }
  }
  return maxi;
}
int main(){
    vector<int>arr = {1 ,3 ,-1 ,4 ,-4};
    int ans = LongestSubsetWithZeroSum(arr);
    cout<<"Longest zero sum subarray length is : "<<ans<<endl;
}