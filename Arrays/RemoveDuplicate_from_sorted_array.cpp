#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int i=0;
       for(int j=1; j<arr.size(); j++){
           if(arr[j]!=arr[i]){
               arr[i+1]=arr[j];
               i++;
           }
       }
       return i+1;
}

int main(){
    vector<int>arr = {1 ,2 ,2 ,3 ,3 ,3 ,4 ,4 ,5 ,5};
    int n = arr.size();
    int ans = removeDuplicates(arr,n);
    cout<<"The length of the new array after removing duplicates : "<<ans<<endl;
}