#include<bits/stdc++.h>
#define ll long long
using namespace std;

void insertion_sort(ll arr[], size_t arr_len);

int main(){
    ll arr[]{8, 12, 11, 13, 5, 6};
    size_t arr_len = sizeof(arr)/sizeof(*arr);
    insertion_sort(arr, arr_len);
    for(auto val: arr){
        cout<<val<<", ";
    }
}

void insertion_sort(ll arr[], size_t arr_len){

    for(ll i{1};i<arr_len;i++){

        ll j{i-1};      // previous index
        ll key{arr[i]}; // current index value(placing it at right position will be the target for this iteration)

        while(j >= 0 &&  arr[j] > key){
            ll temp{arr[j]};
            arr[j] = key;       // previous index
            arr[j+1] = temp;    // swapping complete
            j -= 1;
        }
    }
}

/* Insertion sort works like sorting cards we start from second item and check wheather it is smaller
then previous card if it is we place it before the previous card. So in array there is a sorted
section and an unsorted section */