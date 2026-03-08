#include<bits/stdc++.h>
using namespace std;
//Strong number
 void strongnumber(int n){
    int temp = n;
    int sum=0;
    while(n>0){
        int lastno = n%10;
        int fact=1;
        for(int i=1;i<=lastno;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(sum==temp) cout<<"Strong Number"<<endl;
    else cout<<"Number is not Strong Number"<<endl;
  
  }
  int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
     strongnumber(n);

    return 0;
}
  }