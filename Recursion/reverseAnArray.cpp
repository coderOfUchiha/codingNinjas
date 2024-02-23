#include<bits/stdc++.h>
using namespace std;
void reverse(int a[], int i, int n){
    int N=n;

    if(i>n){
        return;
    }
    swap(a[i],a[n]);
    reverse(a,i+1,n-1);
}

int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    reverse(a,0, n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}