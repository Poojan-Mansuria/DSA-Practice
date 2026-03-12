#include<bits/stdc++.h>
using namespace std;

int print(int n,int i,int arr[]){
    if(i>=n/2) return true;
    if(arr[i]!=arr[n-i-1]){
        return false;
    }else{
        return print(n,i+1,arr);
    }
}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     if(print(n,0,arr)){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    
    }

