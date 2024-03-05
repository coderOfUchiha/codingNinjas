#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,bitNo;
    cin>> n>> bitNo;
    int onMask = 1<< bitNo;
    int offMask = ~(1<< bitNo);
    int toggleMask = onMask;
    int checkMask = onMask;

    cout<< (n|onMask) <<endl;
    cout<< (n & offMask) <<endl;
    cout<< (n ^ toggleMask) <<endl;
    cout<< (((n&checkMask)==0)? false:true) <<endl;
}