#include <bits/stdc++.h>
using namespace std;

// -------- Pattern 1 -------- //
void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
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

        pattern1(n);   // can call any function over here 
        cout << endl;  // space between patterns
    }

    return 0;
}
