#include<bits/stdc++.h>
using namespace std;
//Count digits in a number 
 int countdigits1(int n){
    int count = 0;
    while(n>0){
        int lastno = n%10;
        count += 1;
        n=n/10;
    }
    return count;
  }
    int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
    cout<<countdigits1(n);
    }
    return 0;

    

  }