// minimum no. of ways to make change
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
    vector<vector<ll>>dp(vec.size(), vector<ll>(targetSum+1, 0));
    // for first column of dp
    for(auto &v:dp)v[0]=0;
    // for first row of dp
    for(int i{1};i<dp[0].size();i++){
        if(i>=vec[0] && i%vec[0]==0){
            dp[0][i]=i/vec[0];
        }
        else dp[0][i]=0;
    }
    for(int i{1};i<dp.size();i++){
        for(int j{1};j<dp[0].size();j++){
            if(j<vec[i])dp[i][j]=dp[i-1][j];
            else{
                dp[i][j]=min(dp[i-1][j], 1+dp[i][j-vec[i]]);
            }
        }
    }
    int ways=dp.back().back();
    cout<<"minimum no. of coins: "<<ways<<endl;
    int i=dp.size()-1, j=dp[0].size()-1;
    vector<ll>ans;
    while(ways){
        if(i-1!=-1 && dp[i][j]==dp[i-1][j])i--;
        else{
            if(dp[i][j-vec[i]]!=0){
                ans.push_back(vec[i]);
                j=j-vec[i];
            }
            else{
                ans.push_back(vec[i]);
                break;
            }
        }
    }
    cout<<"coins: ";
    for(auto v:ans)cout<<v<<", ";
}