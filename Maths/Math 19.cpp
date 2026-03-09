#include<bits/stdc++.h>
using namespace std;
// Largest digit of a given number

void largestdigit(int n){
    int largest = 0;
    while(n>0){
        int lastno = n % 10;
        if(lastno > largest){
            largest = lastno;
        }
        n = n / 10;
    }
    cout<<largest<<endl;
}

int main(){

    int t;
    cin>>t;

    for(int i=0;i<t;i++){

        int n;
        cin>>n;

        largestdigit(n);
    }

    return 0;
}