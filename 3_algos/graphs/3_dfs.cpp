#include<bits/stdc++.h>
using namespace std;

void dfs(int src, vector<vector<int>>&adlist, vector<bool>&visited, vector<int>&res){
    visited[src] = true;
    res.push_back(src);
    for(auto x:adlist[src]){
        if(visited[x])continue;
        dfs(x,adlist,visited,res);
    }
}

int main(){
    int v,e;
    cin>>v>>e;
    vector<vector<int>>adlist(v);
    for(int i=0;i<e;i++){
        int x,y;
        cin>>x>>y;
        adlist[x].push_back(y);
        adlist[y].push_back(x);
    }
    vector<int> res;
    // vector<int> stac;
    vector<bool> visited(v,false);

    dfs(0,adlist,visited,res);
    for(auto v:res)cout<<v<<" ";
}
/*
5 4
0 1
0 2
0 3
2 4
*/