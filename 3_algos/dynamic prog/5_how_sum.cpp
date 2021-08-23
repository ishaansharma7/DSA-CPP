// return all subarray which forms targetSum
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool recursion(ll targetSum, vector<ll>&vec, vector<ll>current, set<vector<ll>>&store, unordered_map<ll, vector<ll>>&mymap){
    if(targetSum==0){
        return true;
    }
    if(targetSum<0)return false;
    for(auto val:vec){
        ll rmdr = targetSum-val;
        current.push_back(val);
        if(recursion(rmdr, vec, current, store, mymap)){
            sort(current.begin(), current.end());
            store.insert(current);
        }
        current.pop_back();
    }
    return false;
}

int main(){
    unordered_map<ll, vector<ll>>mymap;
    set<vector<ll>>store;
    vector<ll>current;
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
    recursion(targetSum, vec, current, store, mymap);
    for(auto val:store){
        for(auto v:val){
            cout<<v;
        }
        cout<<endl;
    }
}