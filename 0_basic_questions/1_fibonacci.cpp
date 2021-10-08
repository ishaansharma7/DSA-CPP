// display fibonacci sequence
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1=0,n2=1,n3;
    int length;
    cin>>length;
    cout<<0<<" "<<1;
    for(int i=2;i<length;i++){
        n3 = n1 + n2;
        cout<<" "<<n3;
        n1 = n2;
        n2 = n3;
    }
}