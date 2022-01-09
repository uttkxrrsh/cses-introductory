#include<bits/stdc++.h>
using namespace std;
 
long long calc(long long y, long long x){
    long long n;
    long long cross;
    long long count;
    if(y>x){
        cross = y*y - (y-1);
        if(y%2 == 0){
            count = cross + (y-x);
        }
        else{
            count = cross - (y-x);
        }
    }
    else{
        cross = x*x - (x-1);
        if(x%2 == 0){
            count = cross - (x-y);
        }
        else{
            count = cross + (x-y);
        }
    }
    return count;
}
 
 
int main(){
    int n;
    cin>>n;
    long long y;
    long long x;
    long long val;
 
    for(int i = 0; i<n; i++){
        cin>> y >> x;
        val = calc(y,x);
        cout<<val<<'\n';
    }
}