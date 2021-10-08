#include<bits/stdc++.h>
#define ll long long
using namespace std;

void bubble_sort(ll arr[], size_t len_arr);

int main(){

    ll marks[]{77,23,56,92,93,60,39};
    size_t len_arr{sizeof(marks)/sizeof(*marks)};
    bubble_sort(marks, len_arr);

    for(auto val:marks){
        cout<<val<<endl;
    }

    return 0;
}

void bubble_sort(ll arr[], size_t len_arr){

    for(size_t i{0};i<len_arr-1;i++){

        for(size_t j{0};j<len_arr-i-1;j++){

            if(arr[j]>arr[j+1]){

                ll temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

/*In every full loop of inner loop the biggest element is pushed to last spot in array, 
when loop is at second last position the biggest element is at last position so there is 
no need to run loop for last position. That is why (-1) is there in outer and inner loop.

In inner loop stopping condition len_arr-i-1 we have a guarentee that the last excluded
items are sorted due to previous iterations.

*/