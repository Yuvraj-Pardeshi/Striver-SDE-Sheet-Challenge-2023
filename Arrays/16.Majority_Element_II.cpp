#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int el1 = INT_MIN, el2 = INT_MIN;
    int cnt1 = 0, cnt2 = 0;
    int n = arr.size();
    for(int i=0; i<n; i++){
        if(cnt1==0 && arr[i]!=el2){
            cnt1 = 1;
            el1 = arr[i];
        }
        else if(cnt2 == 0 && arr[i]!=el1){
            cnt2 = 1;
            el2 = arr[i];
        }
        else if(el1 == arr[i]) cnt1++;
        else if(el2 == arr[i]) cnt2++;
        else{
            cnt1--;
            cnt2--;
        }
    }
    cnt1=0; cnt2=0;
    int mini = (n/3)+1;
    vector<int>ans;
    for(int i=0; i<n; i++){
        if(el1==arr[i]) cnt1++;
        else if(el2==arr[i]) cnt2++;
    }
    if(cnt1 >=mini) ans.push_back(el1);
    if(cnt2 >= mini) ans.push_back(el2);
    sort(ans.begin(),ans.end());
    return ans;

}
int main(){
    vector<int>arr = {3 ,2 ,2 ,1 ,5 ,2 ,3};
    vector<int>ans = majorityElementII(arr);
}
