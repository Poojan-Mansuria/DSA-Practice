#include<bits/stdc++.h>
using namespace std;

int linearsearch(vector<int>& arr,int n,int d){
   for(int i=0;i<n;i++){
    if(arr[i]==d){
        return i;
    }
   }
    return -1;
  
}
int main(){

    int n;
    cin>>n;
 
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    int d;
    cin>>d;

    cout<<linearsearch(arr,n,d);
      
}