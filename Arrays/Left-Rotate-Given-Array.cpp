#include<bits/stdc++.h>
using namespace std;

vector<int> leftrotate(vector<int>& arr,int n){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return arr;
}
// whenever to return full array use function type vector one value ke liye bool aur int or no return ke liye void 
int main(){

    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   //write this for vector function  
  vector<int> result = leftrotate(arr, n);
  for(int i=0; i<n; i++){
    cout << result[i] << " ";
}
}