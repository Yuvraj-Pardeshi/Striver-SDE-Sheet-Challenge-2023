#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	unordered_map<int,int>mpp;
	for(int i=0;i<n; i++){
		mpp[arr[i]]++;
	}
	for(auto it : mpp){
		if(it.second > 1){
			return it.first;
		}
	}
	return -1;
}

int main(){
	vector<int>arr = {3,1,3,4,2};
	int n = arr.size();
	int ans = findDuplicate(arr,n);
	cout<<"The duplicate element is: "<<ans;
}