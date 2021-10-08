#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>a{{1,2,3}, {4,5,6}, {7,8,9}};
    vector<vector<int>>b{{1,2,3}, {4,5,6}, {7,8,9}};
    int row = a.size();
    int col = a[0].size();
    vector<vector<int>>mul(row, vector<int>(col, 0));
    
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            for(int k=0;k<col;k++)
                mul[i][j] += a[i][k]*b[k][j];
    
    for(auto m:mul){
        for(auto v:m)cout<<v<<" ";
        cout<<endl;
    }
}
