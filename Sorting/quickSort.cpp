#include<bits/stdc++.h>
using namespace std;

int piv(int low, int high, vector<int>&arr){

    int pivot = arr[low];
    int i=low;
    int j=high;

    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[i]>pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int low, int high, vector<int>&arr){

    int i=low;
    int j=high;
    if(low<high){
        int pivot= piv(low, high, arr);
        quickSort(low, pivot-1, arr);
        quickSort(pivot+1, high, arr);
    }   
}

int main(){

    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){

        int x;
        cin>>x;
        arr.push_back(x);
    }
    quickSort(0,n-1,arr);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}