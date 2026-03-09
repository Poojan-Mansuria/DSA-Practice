#include<bits/stdc++.h>
using namespace std;
//Chech power of 2 

//Method 1
void powerof2(int n){

    while(n>1){
       if(n%2!=0){
            cout<<"Not Power of 2"<<endl;
            return;
        }
        n = n/2;
    }
    cout<<"Power of 2"<<endl;
}
 
//Method 2
void powerof2(int n){

    if(n>0 && (n & (n-1)) == 0)
        cout<<"Power of 2"<<endl;
    else
        cout<<"Not Power of 2"<<endl;
}

int main(){

    int t;
    cin>>t;

    for(int i=0;i<t;i++){

        int n;
        cin>>n;

        powerof2(n);
    }

    return 0;
}