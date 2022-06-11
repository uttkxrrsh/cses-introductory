#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define f first
#define s second
#define pb push_back
#define eb emplace_back
#define pp pop_back
#define rep(i,a, b) for(auto i=a; i<b; i++)
#define repe(i,a, b) for(auto i=a; i<=b; i++)
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define all(x) x.begin(), x.end()
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

// ll appledivide(vector<ll> &v, ll total,ll curr, int i){
//     if(i==0){
//         return abs(total-curr-curr);
//     }
//     return min(appledivide(v,total,curr,i-1),appledivide(v,total,curr+v[i],i-1));
// }
//recursion
int main(){
    FAST
    vector<ll> v;
    ll a,curr;
    w(n){
        cin>>a;
        v.pb(a);
    }
    n = v.size();
    ll total = accumulate(all(v),0);
    a = LLONG_MAX;
    rep(i,0,(1<<n)){
        curr = 0;
        rep(j,0,n){
            if(1<<j & i)curr+=v[j];
        }
        a = min(a,total-curr-curr);
    }
    return 0;
}