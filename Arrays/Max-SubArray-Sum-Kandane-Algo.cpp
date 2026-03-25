#include <iostream>
#include <vector>
using namespace std;

long long kadane(vector<int> &arr)
{
    long long sum = 0;
    long long maxi = arr[0];

    for(int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];

        if(sum > maxi)
            maxi = sum;

        if(sum < 0)
            sum = 0;
    }

    return maxi;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    
    for(int i = 0; i < n; i++)
        cin >> arr[i];

       cout <<kadane(arr);  

    return 0;
}