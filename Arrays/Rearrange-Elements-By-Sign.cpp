#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n);

    int posIndex = 0; // even index
    int negIndex = 1; // odd index

    for (int i = 0; i < n; i++) {
        if (nums[i] >= 0) {
            ans[posIndex] = nums[i];
            posIndex += 2;
        } else {
            ans[negIndex] = nums[i];
            negIndex += 2;
        }
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> res = rearrangeArray(nums);

    cout << "Rearranged array: ";
    for (int x : res) cout << x << " ";
}