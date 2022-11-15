#include<bits/stdc++.h>
#define ll long long
#define f first
#define s second
#define pb push_back
#define eb emplace_back
#define pp pop_back

using namespace std;

const int M = 1e9+7;

ll binE(ll a, ll b){
    ll ans=1;
    while(b>0){
        if(b&1){
            ans = (ans*a)%M;
        }
        a = (a*a)%M;
        b>>=1;
    }
    return ans;
}

int main(){
    ll b;
    cin>>b;
    cout<<binE(2,b);
    return 0;
}