#include<bits/stdc++.h>
#define ll long long
#define f first
#define s second
#define pb push_back
#define eb emplace_back
#define pp pop_back
#define rep(a,b) for(ll i=a; i<b; i++)
#define repe(a,b) for(ll i=a; i<=b; i++)
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define all(x) x.begin(), x.end()
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    FAST
    int n,val;
    string s0;
    cin>>n;
    rep(0,(1<<n)){
        val = (i^(i>>1));
        bitset<32> r(val);
        s0 = r.to_string();
        cout<<s0.substr(32-n)<<'\n';
    }
    return 0;
}