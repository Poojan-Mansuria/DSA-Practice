#include<bits/stdc++.h>
using namespace std;

int removeduplicate(vector<int>& arr,int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}
 
int main(){

    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<<removeduplicate(arr,n);

}