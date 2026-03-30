#include<bits/stdc++.h>
using namespace std;

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
    cout << "Sum of factorials: " << sum << " Temp: " << temp << endl;
    if(sum==temp) cout<<"Strong Number"<<endl;
    else cout<<"Not Strong Number"<<endl;
}

int main(){
    int t;
    cout << "Enter test cases: " << endl;
    cin >> t;
    
    for(int i=0; i<t; i++){
        cout << "Enter number: " << endl;
        int n;
        cin >> n;
        strongnumber(n);
    }
    return 0;
}