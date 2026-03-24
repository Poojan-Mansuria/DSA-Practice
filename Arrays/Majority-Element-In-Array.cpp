#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& arr, int n)
{
    int cnt = 0;
    int elem = 0;

    for (int i = 0; i <arr.size(); i++)
    {
        if (cnt == 0)
        {
            elem = arr[i];
            cnt = 1;
        }
        else if (arr[i] == elem)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }

    int cnt1 = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == elem)
        {
            cnt1++;
        }
    }

    if (cnt1 > arr.size() / 2)
    {
        return elem;
    }

    return -1;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<<majorityElement(arr, n);


    return 0;
}