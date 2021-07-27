#include<bits/stdc++.h>
#define ll long long
using namespace std;

void recursion(string str, set<string>& vec){
    if(str.size()<2)return;
    string s;
    for(int i{0};i<str.size()-1;i++){
        s="";
        for(int j{0};j<=i;j++){
            s+=str[j];
        }
        if(str[i]!='-' && str[i-1]!='-' && str[i+1]!='-'){
        s+='-';
        }
        else continue;
        for(int k{i+1};k<str.size();k++){
            s+=str[k];
        }
        vec.insert(s);
        // recursion(s,vec);
    }
    return;
}

int main(){
    string str;
    cin>>str;
    set<string>vec;
    recursion(str, vec);
    for(auto v:vec)cout<<v<<endl;
}