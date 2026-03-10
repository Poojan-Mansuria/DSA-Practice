#include <bits/stdc++.h>
using namespace std;

int cnt=0;
void Recursion(){
    if(cnt==4) return;
    else cout<<cnt<<endl;
    cnt++;
    Recursion();

}

int main(){
     Recursion();
    return 0;
}
