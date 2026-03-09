#include<bits/stdc++.h>
using namespace std;

//Swap Two Numbers Without Using Third Variable

void swapnum(int a,int b){
       a=a+b;
       b=a-b;
       a=a-b;
    
       cout<<"Numbers After Swapping"<<endl;
       cout<<"a="<<a<<endl;
       cout<<"b="<<b<<endl;
}

 int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
       swapnum(a,b);
    }
    return 0;

  }