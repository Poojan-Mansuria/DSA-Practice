#include <bits/stdc++.h>
using namespace std;

int print1(int n){
    if(n==0){
        return 1;
    }else{
        return n * print1(n-1);
    }
}

int main(){
    int n;
    cin>>n;
    cout<<print1(n);
    return 0;
}