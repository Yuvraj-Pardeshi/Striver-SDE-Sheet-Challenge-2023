#include<bits/stdc++.h>
using namespace std;
void setZeros(vector<vector<int>> &matrix,int n, int m)
{
	int row[n] = {0};
	int col[m] = {0};

	  for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (row[i]==1 || col[j]==1) {
                matrix[i][j] = 0;
            }
        }
    }

}
int main(){
    vector<vector<int>>matrix = {{7,19,3},{4,21,0}};
    int n = matrix.size();
    int m = matrix[0].size();
    setZeros(matrix,n,m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }cout<<endl;
}
