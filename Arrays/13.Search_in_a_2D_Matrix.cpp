#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& mat, int target) {
        if(mat.size()==0) return false;
        int n = mat.size();
        int m = mat[0].size();
        int low = 0; int high = (n*m) - 1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(mat[mid/m][mid%m] == target){
                return true;
            }
            else if(mat[mid/m][mid%m] < target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return false;
}
int main(){
    vector<vector<int>> mat = {{1 ,2 ,3 ,4},
                               {5 ,6 ,7 ,8},
                               {9 ,10 ,11 ,12}};
    int ans = searchMatrix(mat,8);
    cout<<"The target found in the matrix true or false : "<<ans<<endl;
}