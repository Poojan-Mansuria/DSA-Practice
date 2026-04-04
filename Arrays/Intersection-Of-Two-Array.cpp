#include<bits/stdc++.h>
using namespace std;
//Missing Number In TWo Array
//uhuhiih

vector<int> IntersectionArray(vector<int>& arr1, vector<int>& arr2){
    int n1 = arr1.size();
    int n2 = arr2.size();

    int i = 0;
    int j = 0;

    vector<int> interArr;

    while(i < n1 && j < n2){

        if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr2[j] < arr1[i]){
            j++;
        }
        else{
           interArr.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    return interArr;
}

int main(){

    int n1, n2;
    cin >> n1 >> n2;

    vector<int> arr1(n1);
    for(int i = 0; i < n1; i++){
        cin >> arr1[i];
    }

    vector<int> arr2(n2);
    for(int i = 0; i < n2; i++){
        cin >> arr2[i];
    }

    vector<int> result = IntersectionArray(arr1, arr2);

    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
}
