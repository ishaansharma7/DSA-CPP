#include<bits/stdc++.h>
#define ll long long
using namespace std;

void selection_sort(ll arr[], size_t arr_len);
void swap(ll &a, ll &b);

int main(){

    ll arr[]{8, 12, 11, 13, 5, 6};
    size_t arr_len = sizeof(arr)/sizeof(*arr);
    selection_sort(arr, arr_len);

    for(auto val: arr){
        cout<<val<<", ";
    }
}

void selection_sort(ll arr[], size_t arr_len){

    for(size_t i{0};i<arr_len-1;i++){

        ll smallest{arr[i]};
        ll index{-1};

        for(size_t j{i};j<arr_len;j++){

            if(arr[j] < smallest){
                smallest = arr[j];
                index = j;
            }
        }

        if(index != -1)
        swap(arr[i], arr[index]);
    }
}

void swap(ll &a, ll &b){

    ll temp{a};
    a = b;
    b = temp;
}

/* Working- it finds minimum value in array and swap it to begining, then ignores the swapped items
and work on items left in array

arr[] = 64 25 12 22 11

// Find the minimum element in arr[0...4]
// and place it at beginning
11 25 12 22 64

// Find the minimum element in arr[1...4]
// and place it at beginning of arr[1...4]
11 12 25 22 64

// Find the minimum element in arr[2...4]
// and place it at beginning of arr[2...4]
11 12 22 25 64

// Find the minimum element in arr[3...4]
// and place it at beginning of arr[3...4]
11 12 22 25 64 

*/