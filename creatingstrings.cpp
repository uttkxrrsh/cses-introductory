#include<bits/stdc++.h>
#define ll long long
#define f first
#define s second
#define pb push_back
#define eb emplace_back
#define pp pop_back
#define rep(a, b) for(int i=a; i<b; i++)
#define repe(a, b) for(int i=a; i<=b; i++)
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define all(x) x.begin(), x.end()
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

ll factorial(ll n){
    return (n == 1 || n==0) ? 1 : n*factorial(n-1);
}

int main(){
    FAST
    string s0;
    getline(cin, s0);
    unordered_map<char, ll> map;
    rep(0,s0.length()){
        map[s0[i]]++;
    }
    ll total = factorial(s0.length());
    for(auto i: map){
        if(i.s>1){
            total /=factorial(i.s);
        }
    }
    
    return 0;
}