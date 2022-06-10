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


void create_str(string s0, ll l, ll r,unordered_map<string, ll> &map){
    if(l == r){
        map[s0]++;
    }
    else{
        rep(l,r){
            swap(s0[l], s0[i]);
            create_str(s0,l+1,r,map);
            swap(s0[l],s0[i]);
        }
    }
    return;
}


int main(){
    FAST
    string s0;
    getline(cin, s0);
    unordered_map<char, ll> map;
    unordered_map<string, ll>map1;
    vector<string> ans;
    rep(0,s0.length()){
        map[s0[i]]++;
    }
    ll total = factorial(s0.length());
    for(auto i: map){
        if(i.s>1){
            total /=factorial(i.s);
        }
    }
    cout<<total<<'\n';
    create_str(s0, 0, s0.length(),map1);

    unordered_map<string, ll>::iterator it;
    for(auto i:map1){
        ans.pb(i.f);
    }
    sort(all(ans));
    for(auto i:ans){
        cout<<i<<'\n';
    }
    return 0;
}