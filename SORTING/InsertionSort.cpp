#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v = {1,3,6,5,3,2,2,7,2,1,5};

    for(int i=1;i<v.size();i++){
        for(int j=i;j>=1 && v[j]<v[j-1];j--){
            swap(v[j],v[j-1]);
        }
    }

    for(auto u : v){
        cout << u << " ";
    }
}