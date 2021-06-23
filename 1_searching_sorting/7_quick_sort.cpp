#include<bits/stdc++.h>
#define ll long long
using namespace std;

void quicksort(ll arr[], ll start, ll end);
ll partition(ll arr[], ll start, ll end);

int main(){

    ll arr[]{8, 12, 11, 13, 5, 6};
    ll arr_len{sizeof(arr)/sizeof(*arr)};
    quicksort(arr, 0, arr_len-1);

    for(auto val: arr){
        cout<<val<<", ";
    }
}

void quicksort(ll arr[], ll start, ll end){

    if(start >= end)
    return;

    ll partition_index = partition(arr, start, end);
    cout<<"LEFT"<<endl;
    quicksort(arr, start, partition_index-1);
    cout<<"RIGHT"<<endl;
    quicksort(arr, partition_index+1, end);
}

ll partition(ll arr[], ll start, ll end){

    ll pivot{arr[end]};
    ll partition_index{start};

    for(ll i{start};i<end;i++){

        if(arr[i] < pivot){
            swap(arr[i], arr[partition_index]);
            partition_index++;
        }
    }

    swap(arr[partition_index], arr[end]);
    
    cout<<"pivot: "<<pivot<<endl;
    cout<<"Partition Index: "<<partition_index<<endl;

    for(ll i{start};i<=end;i++){

        cout<<arr[i]<<", ";
    }
    cout<<endl;

    return partition_index;
}
