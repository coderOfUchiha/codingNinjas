#include<bits/stdc++.h>
using namespace std;

void sum(int n, int i){
    if(i<1){
        cout<<n;
        return;
    }
    sum(n+i, i-1);
}


int main(){

    int n;
    cin>>n;
    int Sum=0;
    sum(Sum,n);
}