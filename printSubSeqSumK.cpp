#include<bits/stdc++.h>
using namespace std;

bool printF(int ind ,int a[], vector<int>ans, int n, int k){

    if(ind == n){
        int sum =0;
        for(auto it : ans){
            sum= sum+it;
        }
        if(sum==k)
        {
            for(auto it: ans){
                cout<<it<<" ";
            }
            cout<<endl;
            return true;
        }
        return false;
        
    }
    ans.push_back(a[ind]);
    if(printF(ind+1, a, ans, n, k) == true) return true;
    ans.pop_back();
    printF(ind+1, a, ans,n,k);
}

int main(){

    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>ans;

    printF(0,a,ans,n,k);
}