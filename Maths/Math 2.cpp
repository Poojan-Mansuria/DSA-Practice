#include<bits/stdc++.h>
using namespace std;

//Reversing a give number M1
 void revdigits1(int n){  
    while(n>0){
        int lastno = n%10;
     cout<<lastno;
        n=n/10;
    }
  }

  
  int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
    revdigits1(n);
    }
    return 0;

  }