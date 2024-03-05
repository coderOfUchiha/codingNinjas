#include<bits/stdc++.h>
using namespace std;

int power(int n){
    int i =1;
    while(i*2<=n){
        i= i*2;
    }
    return i;
}
int main(){

    int n;
    cin>>n;
    int n2p = power(n);
    int l = n- n2p;
    cout<<2*l+1;
}