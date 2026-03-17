#include <bits/stdc++.h>
using namespace std;
/* -------- Pattern 2 -------- */
void pattern2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            cout<<"* ";
        cout<<endl;
    }
}

int main(){
    int t;
    cin >> t;   // number of test cases

    for(int k = 0; k < t; k++){   // multiple inputs
        int n;
        cin >> n;

        pattern2(n);   // can call any function over here 
        cout << endl;  // space between patterns
    }

    return 0;
}