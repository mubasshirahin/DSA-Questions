#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>&v,int target,int start,int end){
    
    while(start<=end){
        int mid = start + (end - start)/2;

        if(v[mid]==target){
            return mid + 1;
        }
        else if(v[mid]< target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return start;
}

void binaryInsertionSort(vector<int>&v){
    int n = v.size();

    for(int i=1;i<n;i++){
        int target = v[i];
        int pos = binarySearch(v,target,0,i-1);

        for(int j=i;j>pos;j--){
            v[j]=v[j-1];
        }
        v[pos] = target;
    }
}

int main(){
    vector<int> v = {1,4,3,5,2,6,4,6,2};

    binaryInsertionSort(v);

    for(auto u : v){
        cout<<u <<" ";
    }


}