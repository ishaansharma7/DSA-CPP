// return subarray which forms targetSum
#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> recursion(int targetSum, vector<ll>&vec){
    if(targetSum==0) return vector<ll>();
    if(targetSum<0)return vector<ll>{-1};
    vector<ll>shortestCombination;
    bool firstTime = true;
    for(auto val:vec){
        int remainder = targetSum-val;
        vector<ll> combination = recursion(remainder, vec);
        if(firstTime || (combination.size() == 0 || combination[0]!=-1 && combination.size()<shortestCombination.size())){
            firstTime = false;
            shortestCombination = combination;
            cout<<combination.back();
        }
    }
    return shortestCombination;
}

int main(){
    unordered_map<ll, vector<ll>>mymap;
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
    vector<ll> check;
    check = recursion(targetSum, vec);
    for(auto v:check)cout<<v<<", ";
}