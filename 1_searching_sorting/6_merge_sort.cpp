#include<bits/stdc++.h>
#define ll long long
using namespace std;

void merge_sort(ll arr[], ll l, ll r);
void merge(ll arr[], ll l, ll mid, ll r);

int main(){

    ll arr[]{8, 12, 11, 13, 5, 6};
    size_t arr_len = sizeof(arr)/sizeof(*arr);
    merge_sort(arr, 0, arr_len-1);

    for(auto val: arr){
        cout<<val<<", ";
    }
}

void merge_sort(ll arr[], ll l, ll r){
    
    if(l >= r)
    return;

    ll mid = (l+r)/2;
    merge_sort(arr, l, mid);
    merge_sort(arr, mid+1, r);
    merge(arr, l, mid, r);
}

void merge(ll arr[], ll l, ll mid, ll r){

    ll n1{mid-l+1};
    ll n2{r-mid};
    ll L[n1], R[n2];

    for(size_t i{0};i<n1;i++){

        L[i] = arr[l+i];
    }

    for(size_t j{0};j<n2;j++){
        
        R[j] = arr[mid+1+j];
    }

    ll i{0}, j{0}, k{l};

    while(i < n1 && j <n2){
        
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}
/*
MergeSort(arr[], l,  r)
If r > l
     1. Find the middle point to divide the array into two halves:  
             middle m = (l+r)/2
     2. Call mergeSort for first half:   
             Call mergeSort(arr, l, m)
     3. Call mergeSort for second half:
             Call mergeSort(arr, m+1, r)
     4. Merge the two halves sorted in step 2 and 3:
             Call merge(arr, l, m, r)
*/