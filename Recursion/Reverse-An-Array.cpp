#include<bits/stdc++.h>
using namespace std;

//  Using single pointer
void reverse1(int i,int arr[],int n){

    if(i>=n/2){
        return;
    }

    swap(arr[i],arr[n-i-1]);

    reverse1(i+1,arr,n);
}


//  Using two pointers
void reverse2(int l,int r,int arr[]){

    if(l>=r){
        return;
    }

    swap(arr[l],arr[r]);

    reverse2(l+1,r-1,arr);
}


int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // call any one of the methods

    reverse1(0,arr,n);     // method 1

    // reverse2(0,n-1,arr); // method 2


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}