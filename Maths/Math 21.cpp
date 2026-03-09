#include<bits/stdc++.h>
using namespace std;

void harshad(int n){

    int sum = 0;
    while(n>0){

        int lastno = n % 10;

        sum = sum + lastno;

        n = n / 10;
    }

    if(n % sum == 0)
        cout<<"Harshad Number"<<endl;
    else
        cout<<"Not Harshad Number"<<endl;
}

int main(){

    int t;
    cin>>t;

    for(int i=0;i<t;i++){

        int n;
        cin>>n;

        harshad(n);
    }

    return 0;
}