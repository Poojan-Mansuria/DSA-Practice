#include<bits/stdc++.h>
using namespace std;

vector<int> Sortedarray(vector<int>& arr1, vector<int>& arr2){
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i = 0;
    int j = 0;

    vector<int> unionArr;

    while(i < n1 && j < n2){
        if(arr1[i] <= arr2[j]){
            if(unionArr.size() == 0 || unionArr.back() != arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        else{ 
            if(unionArr.size() == 0 || unionArr.back() != arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;   
        }
    } 

    while(j < n2){
        if(unionArr.size() == 0 || unionArr.back() != arr2[j]){
            unionArr.push_back(arr2[j]);
        }
        j++;  
    }

    while(i < n1){
        if(unionArr.size() == 0 || unionArr.back() != arr1[i]){
            unionArr.push_back(arr1[i]);
        }
        i++;
    }

    return unionArr;
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

    vector<int> result = Sortedarray(arr1, arr2);

    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
}