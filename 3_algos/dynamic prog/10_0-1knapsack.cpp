#include<bits/stdc++.h>
using namespace std;

void display(vector<vector<int>>&dp, vector<int>&weights){
    int i=dp.size()-1;
    int j=dp[0].size()-1;
    while(i>0 || j>0){
        if(dp[i][j]==dp[i-1][j]) i--;
        else{
            cout<<weights[i]<<" ";
            j = j - weights[i];
        }
    }
}

int main(){
    int capacity=7;
    vector<int>value{0,15,14,10,45,30};
    vector<int>weights{0,2,5,1,3,4};
    vector<vector<int>>dp(value.size()+1, vector<int>(capacity+1, 0));

    for(int j=1;j<dp[0].size();j++)if(j>=weights[1])dp[1][j]=value[1]; // for row with index 1 in dp

    for(int i=2;i<dp.size();i++){
        for(int j=1;j<dp[0].size();j++){
            if(j<weights[i])dp[i][j]=dp[i-1][j];
            else dp[i][j] = max(dp[i-1][j], value[i] + dp[i-1][j-weights[i]]);
        }
    }
    cout<<dp.back().back()<<endl;
    display(dp, weights);
}
