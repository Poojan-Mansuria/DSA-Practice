#include <bits/stdc++.h>
using namespace std;
//Perfect Number
void Perfectnum(int n){
    int sum=0;
    for (int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
           
        }
    } if(sum==n) cout<<"Perfect Number"<<endl;
      else cout<<"Number is not Perfect Number"<<endl;

}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
       Perfectnum(n);
    }
    return 0;

  }
