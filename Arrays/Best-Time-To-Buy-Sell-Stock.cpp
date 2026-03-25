#include <bits/stdc++.h>
using namespace std;

long long maxProfit(vector<int> &arr)
{
    int mini = arr[0];
    long long profit = 0;

    for(int i = 1; i < arr.size(); i++)
    {
        long long cost = (long long)arr[i] - mini;

        if(cost > profit)
            profit = cost;

        if(arr[i] < mini)
            mini = arr[i];
    }

    return profit;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << maxProfit(arr);

    return 0;
}