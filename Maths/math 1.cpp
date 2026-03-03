#include<bits/stdc++.h>
using namespace std;
//Count digits in a number 
 int countdigits1(int n){
    int count = 0;
    while(n>0){
        int lastno = n%10;
        count += 1;
        n=n/10;
    }
    return count;
  }
// Other way to find no of digits is using log function 
int countdigits2(int n){
    int count = (int)(log10(n)+1);
    return count;

  }
//Reversing a give number M1
 void revdigits1(int n){  
    while(n>0){
        int lastno = n%10;
     cout<<lastno;
        n=n/10;
    }
  }
  //Reversing a give number M2
 int revdigit2(int n){
    int revno = 0;
    while(n>0){
        int lastno = n%10;
        n=n/10;
        revno = (revno*10)+lastno;
    }
    return revno;

  }
//Checking if no is panildrome M1
int checkdigit1(int n){
    int revno = 0;
    while(n>0){
        int lastno = n%10;
        n=n/10;
        revno = (revno*10)+lastno;
    }
    return revno;
//write if condition in main function for this code 
/*if(n==checkdigit1(n)){
    cout<<"true"; 
    }else{
        cout<<"false";
    }*/
  }
//Armstrong number
 int armstrong(int n){  
    int sum=0;
    while(n>0){
        int lastno = n%10;
        sum = sum +(lastno*lastno*lastno);
        n=n/10;
    }
    return sum;
    // check this in main condition 
    /* if(armstrong(n)==n){
        cout<<"true";
    }else{
        cout<<"false";
    }*/
  }

  int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
   //call function on requirement of the code
    return 0;
}
  }