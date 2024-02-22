#include<bits/stdc++.h>
using namespace std;

void merge(int low, int mid, int high, vector<int>& a){

    vector<int> ans;
    int left =low;
    int right = mid+1;
    while(left<= mid && right<=high){

        if(a[left]<= a[right]){
            ans.push_back(a[left]);
            left++;
        }
        else
        {
            ans.push_back(a[right]);
            right++;
        }
    }

    while(left<=mid)
    {
        ans.push_back(a[left]);
        left++;
    }
    while(right<=high){

        ans.push_back(a[right]);
        right++;
    }


    for(int i=low;i<=high;i++)
    {
        a[i]= ans[i-low];
    }

}



void mergeSort(int low, int high, vector<int>& a){
    if(low>=high) return;
    int mid = (low+high)/2;
    mergeSort(low, mid, a);
    mergeSort(mid+1, high ,a);
    merge(low, mid, high,a);
}



int main(){

    vector<int> a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    mergeSort(0,n-1,a);

    for(int i=0;i<n; i++){

        cout<<a[i]<<" ";
    }
    cout<<endl;
}