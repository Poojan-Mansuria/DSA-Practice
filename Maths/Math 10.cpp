// Check all divisors of given number
//Method 1
#include <bits/stdc++.h>
using namespace std;

void alldivisor(int n){
    for (int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }

}
//Method 2
void alldivisor2(int n){
   vector<int> ls;
   for(int i=1;i<=sqrt(n);i++){
    if(n%i==0) ls.push_back(i);
    if((n/i)!=i) ls.push_back(n/i);
   }
   sort(ls.begin(),ls.end());
   for(auto it : ls) cout<<it<<" ";
}

  int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
     alldivisor(n);

    return 0;
}
  }
