#include<bits/stdc++.h>
using namespace std;

void leftrotate(vector<int>& arr,int n,int d){
     d=d%n;

     int temp[d];
     for(int i=0;i<d;i++){
       temp[i]=arr[i];
     }
     for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
     }

     for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
     }
    }
void leftrotate1(vector<int>& arr, int n, int d){
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.begin() + n);
    reverse(arr.begin(), arr.begin() + n);
}

int main(){

    int n;
    cin>>n;
    //Elements to rotate
    int d;
    cin>>d;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    leftrotate1(arr,n,d);

      for(int i=0; i<n; i++){
    cout << arr[i] << " ";
}
}