#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long n;
    cin>>n;
    long long a[n];
    for(int i = 0 ; i<n; i++){
        a[i] = i+1;
    }
    if(n==1){
        cout<<1; 
    }
    else if(n<=3){
        cout<<"NO SOLUTION";
    }
    else{
        for(int i= 1; i<n; i+=2){
            cout<<a[i]<<" ";
        }
        for(int i= 0 ; i<n; i+=2){
            cout<<a[i]<<" ";
        }
    }
}