#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll binary_search(ll arr[], size_t arr_len, ll num);

int main(){

    ll my_arr[]{10,14,18,23,45,72,76,89};
    size_t arr_len = sizeof(my_arr)/sizeof(*my_arr);
    ll res = binary_search(my_arr, arr_len, 72);
    (res>-1)? cout<<res : cout<<"not found";
    return 0;
}

ll binary_search(ll arr[], size_t arr_len, ll num){

    ll first{0}, last{arr_len-1}, mid{0};

    while(first <= last){
        mid = (first + last)/2;
        if(arr[mid] < num){
            first = mid + 1;
        }
        else if(arr[mid] > num){
            last = mid - 1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
