//Check for prime number 
#include <bits/stdc++.h>
using namespace std;

void checkprime1(int n){
    int sum=0;
    for (int i=1;i<=n;i++){
        if(n%i==0){
         sum=sum+1;
        }
    }
    if(sum==2){
        cout<<"Number is prime number ";
    }


}
//Method 2
void checkprime2(int n){
   int sum = 0;

   for(int i = 1; i <= sqrt(n); i++){
        if(n%i == 0){
            sum++;
            if(n/i!= i){
                sum++;
            }
        }
   }

   if(sum == 2){
        cout<<"Number is Prime\n";
   }
   else{
        cout<<"Number is Not Prime\n";
   }
}

int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        checkprime2(n);
    }

    return 0;
}