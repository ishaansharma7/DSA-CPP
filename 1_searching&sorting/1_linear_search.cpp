#include<bits/stdc++.h>
#define ll long long
using namespace std;

size_t linear_search(const vector<ll> &vec, ll num);    // address is passed so it do not create a new vector

int main(){
    vector<ll>marks{77,23,56,92,93,60,39,48};
    cout<<"Number at index: "<<linear_search(marks, 39);
    return 0;
}

size_t linear_search(const vector<ll> &vec, ll num){
    for(size_t i{0};i<vec.size();i++){
        if(vec[i]==num)
        return i;
    }
}
