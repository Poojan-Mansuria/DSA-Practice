#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// two sum problem
vector<int> twoSum(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            return {left, right};
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    return {-1, -1};
}

int main() {
    int n, target;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> target;

    vector<int> ans = twoSum(arr, target);

    if (ans[0] == -1) {
        cout << "No pair found";
    }
    else {
        cout << ans[0] << " " << ans[1];
    }

    return 0;
}