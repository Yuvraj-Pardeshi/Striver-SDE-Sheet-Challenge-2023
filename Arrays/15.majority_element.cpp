#include <bits/stdc++.h>
using namespace std;
int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int cnt = 0;
	int el;
	for(int i=0; i<n; i++){
		if(cnt==0){
			el = arr[i];
			cnt = 1;
		}
		else if(arr[i]==el){
			cnt++;
		}
		else{
			cnt--;
		}
	}
	int cnt1=0;
	for(int i=0; i<n; i++){
		if(arr[i]==el){
			cnt1++;
		}
	}
	if(cnt1 > (n/2)) return el;
	else return -1;
	
}
int main(){
    int arr[] = {2,3,9,2,2};
    int n = sizeof(arr)/sizeof(int);
    int ans = findMajorityElement(arr,n);
    cout<<"The Majority elemnet that occurs > N/2 times is : "<<ans<<endl;
    return 0;
}