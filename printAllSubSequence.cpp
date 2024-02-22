#include<bits/stdc++.h>
using namespace std;

void printF(int ind ,int a[], vector<int>ans, int n){

    if(ind == n){

        for(auto it : ans){
            cout<< it <<" ";
        }
        cout<<endl;
        return;
    }
    ans.push_back(a[ind]);
    printF(ind +1, a, ans,n);
    ans.pop_back();
    printF(ind+1, a, ans,n);
}

int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>ans;

    printF(0,a,ans,n);
}