// adjacency list input
#include<bits/stdc++.h>
using namespace std;

int main(){
    int v,e;
    cin>>v>>e;
    vector<vector<int>>adlist(v+1);
    for(int i=0;i<e;i++){
        int x,y;
        cin>>x>>y;
        adlist[x].push_back(y);
        adlist[y].push_back(x);
    }
    cout<<endl;
    for(int i=1;i<adlist.size();i++){
        cout<<i<<" --> ";
        for(int j=0;j<adlist[i].size();j++){
            cout<<adlist[i][j]<<" ";
        }
        cout<<endl;
    }
}
/* Input
6 5
1 2
1 5
2 3
3 4
3 6
*/