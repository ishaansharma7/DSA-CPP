#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    vector<ll>vec;
    ll len{0}, t{0};
    ll targetSum{0};
    cout<<"Enter target sum: ";
    cin>>targetSum;
    cout<<"Enter size of array: ";
    cin>>len;
    cout<<"Enter elements one by one"<<endl;
    for (size_t i = 0; i < len; i++)
    {
        cin>>t;
        vec.push_back(t);
    }
    vector<vector<ll>>dp(len, vector<ll>(targetSum+1, 0));
    for(auto &v:dp)v[0]=1;                  // generating zero in one way for all denominations
    for(int i{0};i<dp.size();i++){          // for denominations
        for(int j{1};j<dp[0].size();j++){   // for current target sum
            if(i==0){                       // for first row/denomination
                if(vec[i]>j){dp[i][j]=0;continue;}
                int col=j-vec[i];
                dp[i][j]=dp[i][col];
                continue;
            }
            if(vec[i]>j){dp[i][j]=dp[i-1][j];continue;}
            int col=j-vec[i];
            dp[i][j]= dp[i-1][j] + dp[i][col];
            continue;
        }
    }
    cout<<(dp.back()).back();
}

/* 1) if coin value is greator than targetSum of column copy above value 
   2) else copy above value + targetSum - coin this result will represent a column and than add column value to sum
*/