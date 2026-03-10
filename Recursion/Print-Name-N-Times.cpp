#include <bits/stdc++.h>
using namespace std;

void print(int i,int n){
    if(i>n) return;
    else cout<<"Poojan\n";
    print(i+1,n);
}
 int main(){
    int n;
    cin>>n;
    print(1,n);
 }