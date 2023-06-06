#include <bits/stdc++.h>
using namespace std;
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	int miss = -1; int rep = -1;
	int hash[n+1] = {0};
	for(int i=0; i<n; i++){
		hash[arr[i]]++;
	}
	for(int i=1; i<=n; i++){
		if(hash[i] == 2) rep = i;
		else if(hash[i] == 0) miss = i;
		if(rep != -1 && miss != -1) break;
	}
	return {miss,rep};
}
int main(){
    vector<int>arr = {3 ,3 ,2 ,1};
    int n = arr.size();
    pair<int,int>ans =  missingAndRepeating(arr,n);
    cout<<"The missing number is: "<<ans.first<<" "<<"The repeating number is : "<<ans.second<<endl;
}
