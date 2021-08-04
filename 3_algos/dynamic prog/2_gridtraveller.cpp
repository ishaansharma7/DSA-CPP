// traveller can move down or right
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll gridtraveller(ll r, ll c, unordered_map<string, ll>&mymap){
    string key=to_string(r)+","+to_string(c);
    if(mymap.find(key)!=mymap.end())return mymap[key];
    if(r==1 && c==1)return 1;
    if(r==0 || c==0)return 0;
    mymap[key] = gridtraveller(r-1, c, mymap) + gridtraveller(r, c-1, mymap);
    return mymap[key];
}

int main(){
    unordered_map<string, ll>mymap;
    ll r,c;
    cin>>r>>c;
    cout<<gridtraveller(r,c, mymap);
}