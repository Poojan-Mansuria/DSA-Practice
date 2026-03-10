#include <bits/stdc++.h>
using namespace std;
//Method 1
void print(int i,int n){
    if(i<1) return;
    else cout<<i<<endl;
    print(i-1,n);
}
//Method 2
void print(int i){

    if(i<1) return;

    cout<<i<<endl;

    print(i-1);
}

 int main(){
    int n;
    cin>>n;
    //print(n) for method 2
    print(n,n);
 }