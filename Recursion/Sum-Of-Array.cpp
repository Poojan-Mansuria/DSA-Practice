#include<bits/stdc++.h>
using namespace std;
//sum of array

int arraysum(int arr[], int n, int i){

    if(i==n){
        return 0;
    }

    return arr[i] + arraysum(arr,n,i+1);
}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum = arraysum(arr,n,0);

    cout<<"Sum of array = "<<sum;
}
