#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter number:";
    cin >> n;

    int a = 0, b = 1, next;

    if(n == 0 || n == 1) {
        cout << "Number is in Fibonacci series";
    }
    else {

        for(int i=3;i<=n;i++) {

            next = a + b;

            if(next == n) {
                cout << "Number is in Fibonacci series";
                return 0;
            }
            else if(next > n) {
                cout << "Number is NOT in Fibonacci series";
                return 0;
            }

            a = b;
            b = next;
        }

        cout << "Number is NOT in Fibonacci series";
    }

    return 0;
}