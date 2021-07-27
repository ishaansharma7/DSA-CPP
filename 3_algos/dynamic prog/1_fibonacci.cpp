#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll recurion(ll num, unordered_map<ll,ll>&mymap){
    if(mymap.find(num)!=mymap.end())return mymap[num];
    if(num<=2)return 1;
    mymap[num] = recurion(num-1, mymap) + recurion(num-2, mymap);
    return mymap[num];
}

int main(){
    unordered_map<ll,ll>mymap;
    ll num;
    cin>>num;
    cout<<recurion(num, mymap);
}