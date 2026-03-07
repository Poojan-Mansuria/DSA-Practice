//E
#include <bits/stdc++.h>
using namespace std;

// Method 1
void euclid1(int a,int b){

    while(a!=b){

        if(a>b) a = a-b;
        else b = b-a;

    }

    cout<<a<<endl;
}

// Method 2
void euclid2(int a,int b){

    while(b!=0){
        int r = a % b;
        a = b;
        b = r;
    }

    cout<<a<<endl;
}

int main(){

    int t;
    cin>>t;

    for(int i=0;i<t;i++){

        int n1,n2;
        cin>>n1>>n2;

        euclid1(n1,n2);
        euclid2(n1,n2);
    }

    return 0;
}