#include <bits/stdc++.h>
using namespace std;

/* -------- Pattern 1 -------- */
void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<"* ";
        cout<<endl;
    }
}

/* -------- Pattern 2 -------- */
void pattern2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            cout<<"* ";
        cout<<endl;
    }
}

/* -------- Pattern 3 -------- */
void pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            cout<<j<<" ";
        cout<<endl;
    }
}

/* -------- Pattern 4 -------- */
void pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            cout<<i<<" ";
        cout<<endl;
    }
}

/* -------- Pattern 5 -------- */
void pattern5(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++)
            cout<<"* ";
        cout<<endl;
    }
}

/* -------- Pattern 6 -------- */
void pattern6(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++)
            cout<<j<<" ";
        cout<<endl;
    }
}

/* -------- Pattern 7 -------- */
void pattern7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++) cout<<" ";
        for(int j=0;j<2*i+1;j++) cout<<"*";
        cout<<endl;
    }
}

/* -------- Pattern 8 -------- */
void pattern8(int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<n-i-1;j++) cout<<" ";
        for(int j=0;j<2*i+1;j++) cout<<"*";
        cout<<endl;
    }
}

/* -------- Pattern 9 -------- */
void pattern9(int n){
    pattern7(n);
    pattern8(n);
}

/* -------- Pattern 10 -------- */
void pattern10(int n){
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=1;j<=stars;j++)
            cout<<"* ";
        cout<<endl;
    }
}

/* -------- Pattern 11 -------- */
void pattern11(int n){
    for(int i=0;i<n;i++){
        int start=(i%2==0)?1:0;
        for(int j=0;j<=i;j++){
            cout<<start<<" ";
            start=1-start;
        }
        cout<<endl;
    }
}

/* -------- Pattern 12 -------- */
void pattern12(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout<<j;
        for(int j=1;j<=2*(n-i);j++) cout<<" ";
        for(int j=i;j>=1;j--) cout<<j;
        cout<<endl;
    }
}

/* -------- Pattern 13 -------- */
void pattern13(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            cout<<num++<<" ";
        cout<<endl;
    }
}

/* -------- Pattern 14 -------- */
void pattern14(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++)
            cout<<ch<<" ";
        cout<<endl;
    }
}

/* -------- Pattern 15 -------- */
void pattern15(int n){
    for(int i=n-1;i>=0;i--){
        for(char ch='A';ch<='A'+i;ch++)
            cout<<ch<<" ";
        cout<<endl;
    }
}

/* -------- Pattern 16 -------- */
void pattern16(int n){
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++)
            cout<<ch<<" ";
        cout<<endl;
    }
}

/* -------- Pattern 17 -------- */
void pattern17(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++) cout<<" ";
        char ch='A';
        for(int j=0;j<2*i+1;j++){
            cout<<ch;
            if(j<i) ch++;
            else ch--;
        }
        cout<<endl;
    }
}

/* -------- Pattern 18 -------- */
void pattern18(int n){
    for(int i=0;i<n;i++){
        for(char ch='A'+n-i-1;ch<='A'+n-1;ch++)
            cout<<ch<<" ";
        cout<<endl;
    }
}

/* -------- Pattern 19 -------- */
void pattern19(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++) cout<<"*";
        for(int j=0;j<2*i;j++) cout<<" ";
        for(int j=0;j<n-i;j++) cout<<"*";
        cout<<endl;
    }
}

/* -------- Pattern 20 -------- */
void pattern20(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++) cout<<"*";
        for(int j=0;j<2*(n-i-1);j++) cout<<" ";
        for(int j=0;j<=i;j++) cout<<"*";
        cout<<endl;
    }
}

/* -------- Pattern 21 -------- */
void pattern21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||i==n-1||j==0||j==n-1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}

/* -------- Pattern 22 -------- */
void pattern22(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int right=2*n-2-j;
            int bottom=2*n-2-i;
            cout<<n-min(min(top,bottom),min(left,right))<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin >> t;   // number of test cases

    for(int k = 0; k < t; k++){   // multiple inputs
        int n;
        cin >> n;

        pattern2(n);   // function call
        cout << endl;  // space between patterns
    }

    return 0;
}