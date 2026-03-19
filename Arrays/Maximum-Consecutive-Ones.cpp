#include<bits/stdc++.h>
using namespace std;

int MaxConsecutiveOnes(vector<int>& array,int n){
    int maxi=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(array[i]==1){
            cnt++;
            maxi=max(maxi,cnt);
        }else{
            cnt=0;
        }
    }
    return maxi;
}
int main(){
    int n;
    cin >> n;


    vector<int> array(n);
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

   cout<<MaxConsecutiveOnes(array,n);
}