#include<bits/stdc++.h>
#define ll long long
#define f first
#define s second
#define pb push_back
#define eb emplace_back
#define pp pop_back

using namespace std;

int main(){
    ll a, ans =0,p=5;
    cin>>a;
    while(a/p){
        ans+=(a/p);
        p*=5;
    }
    cout<<ans;
    return 0;
}