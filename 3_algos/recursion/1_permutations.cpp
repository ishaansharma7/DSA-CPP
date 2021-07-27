//All permutations of white space between letters
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void recursion(string str, set<string> &myset){
    if(str.size()<3)return;
    string mystr;
    for(int i{0};i<str.size();i++){
        if(str[i]==' '){
            for(int j{0};j<str.size();j++)if(j!=i)mystr+=str[j];
            myset.insert(mystr);
            recursion(mystr, myset);
        }
        mystr = "";
    }
    return;
}
int main(){
    string str, str2;
    set<string> myset;
    cin>>str;
    for(int i{0};i<str.size();i++){
        str2+=str[i];
        if(i!=str.size()-1)str2+=' ';
    }
    recursion(str2, myset);
    cout<<str2<<endl;
    for(auto s:myset){
        cout<<s<<endl;
    }
}