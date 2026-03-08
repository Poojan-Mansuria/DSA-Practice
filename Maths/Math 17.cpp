#include<bits/stdc++.h>
using namespace std;
//Product of Digits in a number 
 int prodigits1(int n){
    int sum = 1;
    while(n>0){
        int lastno = n%10;
        sum=sum*lastno;
        n=n/10;
    }
   return sum;
  }
 int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
    cout<<prodigits1(n)<<" ";
    }
    return 0;

  }