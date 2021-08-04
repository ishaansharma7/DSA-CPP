// can a given targetSum be formed from given array;
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool recursion(ll targetSum, vector<ll>&vec, unordered_map<ll, bool>&mymap){
    if(mymap.find(targetSum)!=mymap.end())return mymap[targetSum];
    if(targetSum==0)return true;
    if(targetSum<0)return false;
    for(auto val:vec){
        ll rmdr = targetSum - val;
        if(recursion(rmdr, vec, mymap)){
            mymap[targetSum]=true;
            return true;
        }
    }
    mymap[targetSum]=false;
    return false;
}

int main(){
    unordered_map<ll, bool>mymap;
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
    if(recursion(targetSum, vec, mymap))cout<<"yes";
    else cout<<"no";
}