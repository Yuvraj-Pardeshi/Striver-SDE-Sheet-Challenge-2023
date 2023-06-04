#include <bits/stdc++.h>
using namespace std;
void sort012(int *arr, int n)
{
   //   Write your code here
        int low = 0; int mid = 0; int high = n-1;
        while(mid<=high){
            if(arr[mid]==0){
                swap(arr[mid],arr[low]);
                mid++;
                low++;
            }
            else if(arr[mid]==1){
                mid++;
            }
            else{
                swap(arr[mid],arr[high]);
                high--;
            }
        }
}
int main(){
    int arr[]={0 ,1 ,2 ,2 ,1 ,0};
    int n = sizeof(arr)/sizeof(int);
    sort012(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}