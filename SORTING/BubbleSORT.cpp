#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10] = {1,5,3,3,7,3,6,9,2,6};

    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size-1;i++){
        bool isSorted = true;
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSorted = false;
            }
        }
        if(isSorted)break;
    }

    for(auto u : arr){
        cout<<u<<" ";
    }
}