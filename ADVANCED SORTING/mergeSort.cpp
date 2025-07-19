#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&a,vector<int>&b,vector<int>&merged){
    int i = 0;
    int j = 0;
    int k = 0;
    
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){
            merged[k++] = a[i];
            i++;
        }
        else{
            merged[k++] = b[j];
            j++;
        }
    }
    if(i<a.size()){
        for(int j=i;j<a.size();j++){
            merged[k++] = a[j];
        }
    }
    else{
        for(int i=j;i<b.size();i++){
            merged[k++] = b[i];
        }
    }
}

void mergeSort(vector<int>&v){
    int n = v.size();

    if(n==1)return;

    int n1 = n/2;
    int n2 = n- n/2;

    vector<int>a(n1),b(n2);

    for(int i=0;i<n1;i++){
        a[i] = v[i];
    }
    for(int i=0;i<n2;i++){
        b[i] = v[i+n1];
    }

    mergeSort(a);
    mergeSort(b);
    merge(a,b,v);
}

int main(){
    vector<int> a = {2,11,6,1,10,12};

    mergeSort(a);

    for(auto u : a){
        cout << u << " ";
    }cout << endl;

}