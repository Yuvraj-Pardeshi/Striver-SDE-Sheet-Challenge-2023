#include <bits/stdc++.h> 
using namespace std;
long long maxSubarraySum(int arr[], int n)
{

    long long maxi = LONG_MIN; 
    long long sum = 0;

    for (int i = 0; i < n; i++) {

        sum += arr[i];
        cout<<"sum is : "<<sum<<endl;

        if (sum > maxi) {
            maxi = sum;
        }
        cout<<"maxi is : "<<maxi<<endl;

        if (sum <= 0) {
            sum = 0;
        }
        if(maxi < 0){
            maxi = 0;
        }
    }

    return maxi;
}
int main(){
    int arr[] = {-7,-8,-16,-4,-8,-5,-7,-11,-10,-12,-4,-6,-4,-16,-10};
    int n = sizeof(arr)/sizeof(int);
    int ans =  maxSubarraySum(arr,n);
    cout<<ans<<endl;
    
    return 0;
}
