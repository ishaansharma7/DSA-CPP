#include<bits/stdc++.h>
using namespace std;

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
    queue<int> que;
    vector<bool> visited(v,false);
    que.push(0);
    visited[0] = true;
    while(!que.empty()){
        int td = que.front();
        que.pop();
        res.push_back(td);
        for(auto x:adlist[td]){
            if(visited[x])continue;
            visited[x] = true;
            que.push(x);
        }
    }
    cout<<endl;
    for(auto v:res)cout<<v<<" ";
}
/*
5 4
0 1
0 2
0 3
2 4
*/