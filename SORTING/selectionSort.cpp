#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,4,3,2,5,5,3,5,6,8,1,2,4};

    for(int i=0;i<v.size()-1;i++){
        int minIdx = i;
        for(int j=i;j<v.size();j++){
            if(v[j]<v[minIdx]){
                minIdx = j;
            }
        }
        swap(v[i],v[minIdx]);
    }

    for(auto u : v){
        cout << u << " ";
    }
}