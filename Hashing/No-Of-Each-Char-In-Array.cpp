#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

   //Precompute
   int hash[256]={0};
   for(int i=0;i<s.size();i++){
    hash[s[i]] += 1;
   }

    int q;
    cin>>q;
    while(q--){
        char num;
        cin>>num;
        //Fetching
        cout<<hash[num]<<endl;
    }
}
