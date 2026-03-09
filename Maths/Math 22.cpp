#include<bits/stdc++.h>
using namespace std;

void powerof3(int n){
    
    while(n % 3 == 0){
        n = n / 3;
    }

    if(n == 1){
        cout<<"Number is power of 3";
    }
    else{
        cout<<"Number is not power of 3";
    }
}

int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++){

        int n;
        cin>>n;

    powerof3(n);

}
}