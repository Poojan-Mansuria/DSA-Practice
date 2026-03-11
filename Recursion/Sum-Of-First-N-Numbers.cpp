#include <bits/stdc++.h>
using namespace std;
//Parameterised way
void print(int i,int sum){
    if(i<1){
        cout<<sum;
        return;
    }else{
        print(i-1,sum+i);
    }
}
//Functional way
int print1(int n){
    if(n==0){
        return 0;
    }else{
        return n + print1(n-1);
    }
}

int main(){
    int n;
    cin>>n;
    cout<<print1(n);
    return 0;
}