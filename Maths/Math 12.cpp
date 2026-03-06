//GCD and HCF of the given 2 numbera
#include <bits/stdc++.h>
using namespace std;

// Method 1
void gcd1(int n1,int n2){
    int gcd = 1;

    for(int i=1;i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            gcd = i;
        }
    }

    cout<<gcd<<endl;
}

// Method 2
void gcd2(int a,int b){

    while(a>0 && b>0){

        if(a>b) a = a % b;
        else b = b % a;

    }

    if(a==0) cout<<b<<endl;
    else cout<<a<<endl;
}

int main(){

    int t;
    cin>>t;

    for(int i=0;i<t;i++){

        int n1,n2;
        cin>>n1>>n2;

        gcd1(n1,n2);
        gcd2(n1,n2);
    }

    return 0;
}
