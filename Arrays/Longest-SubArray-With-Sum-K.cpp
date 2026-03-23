#include <bits/stdc++.h>
using namespace std;

int LongestSubArrayWithSumK(vector<int>& arr, long long k){
    int right = 0, left = 0;
    int maxlen = 0;
    long long sum = 0;
    int n = arr.size();

    while(right < n){
        sum += arr[right];
        while(left <= right && sum > k){
            sum -= arr[left];
            left++;
        }
        if(sum == k){
            maxlen = max(maxlen, right-left+1);
        }
        right++;
    }
    return maxlen;
}

int main(){
    int n;
    long long k;
    cin >> n >> k;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << LongestSubArrayWithSumK(arr, k);
    return 0;
}